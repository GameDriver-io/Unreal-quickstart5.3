// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "Framework/Application/IInputProcessor.h"

class RecorderToolPanel;
class FSlateApplication;
class FSlateUser;
struct FInputEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
struct FPointerEvent;

enum recordableEvent {
 KEYPRESS,
 MOUSECLICK,
 MOUSEDOUBLECLICK,
 MOUSEMOVE,
 MOUSEDRAG,//ONLY knows after the fact not when started a capture.  
 MOUSESCROLL,
 TOUCH, ANALOG
};
#define clickThreshold 20
class EventFragment {

public:
	EventFragment(uint32 frame, recordableEvent t, int key, int x = 0, int y = 0);
	recordableEvent GetType() { return type; }
	uint32 GetStartFrame() { return framestart;}
	uint32 GetEndFrame() { return frameend; }
	void setEndFrame(uint32 i) { frameend = i;}
	FVector2D GetXY() { return FVector2D(X, Y); }
	FVector2D GetEndXY() { return FVector2D(endX, endY); }
	FVector2D SetEndXY(int x, int y) { endX = x; endY = y; }
	FVector2D SetXY(int x, int y) { X = x; Y = y; }
	static FString getApiButtonName(FString x);
	static FString getButtonNameFromInt(int f);
	int GetKey() { return key; }
	FORCEINLINE bool operator==(const EventFragment Other) const { return ((key == Other.key) && (framestart == Other.framestart)); }

	FORCEINLINE bool operator<(const EventFragment Other) const {

			if (type == recordableEvent::MOUSEDOUBLECLICK && Other.type == recordableEvent::MOUSECLICK) {
				if (framestart - clickThreshold * 2 < Other.framestart) {
					return true;
				}
			}
			else if (Other.type == recordableEvent::MOUSEDOUBLECLICK && type == recordableEvent::MOUSECLICK) {
				return (framestart < Other.framestart - clickThreshold * 2);
			}
			else {
				return (framestart < Other.framestart);
			}
		return false;
	}
private:
	uint32 framestart=0;
	uint32 frameend=0;
	recordableEvent type;
	int X = 0;
	int Y = 0;
	int endX = 0;
	int endY = 0;
	int key = 0;
};
/**
 * A class that simulates input and blocks hardware input. 
 */
class FGDIOInput : public IInputProcessor, public TSharedFromThis<FGDIOInput>
{
public:
	FGDIOInput(RecorderToolPanel*);

	/** Dtor */
	virtual ~FGDIOInput()
	{};

	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) ;

	int ClearMoves();
	 bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) ;
	 bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) ;
	 bool HandleAnalogInputEvent(FSlateApplication& SlateApp, const FAnalogInputEvent& InAnalogInputEvent) ;
	 const TCHAR* GetDebugName() const override { return TEXT("GDIOInput"); }
	bool HandleMouseMoveEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseButtonUpEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseWheelOrGestureEvent(FSlateApplication& SlateApp, const FPointerEvent& WheelEvent, const FPointerEvent* GestureEvent);
	bool HandleMotionDetectedEvent(FSlateApplication& SlateApp, const FMotionEvent& MotionEvent);
	int MouseKeyToInt(FKey f);
	virtual int32 GetOwnerUserIndex() const { return 8; };
	FVector2D GetEditorMousePosition(const FPointerEvent& MouseEvent);
	int ProcessReadyEvents();
	uint32 getStartLowestFrame();
	bool anyOpenClickEvents();
	void graduateOldVREvents();
	void setupControllerMappings();
protected:
	bool everoutputVR = false;
	bool setupComplete = false;
	TMap<FString, FString> controllerMappings;
	RecorderToolPanel* panel;
	TMap<int32, EventFragment> StartedEvents;
	TArray<EventFragment> *EndingEvents = new TArray<EventFragment>();
};

