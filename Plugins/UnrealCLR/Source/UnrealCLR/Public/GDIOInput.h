// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "Framework/Application/IInputProcessor.h"

class FSlateApplication;
class FSlateUser;
struct FInputEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
struct FPointerEvent;


/**
 * A class that simulates input and blocks hardware input. 
 */
class FGDIOInput : public IInputProcessor, public TSharedFromThis<FGDIOInput>
{
public:
	FGDIOInput();

	/** Dtor */
	virtual ~FGDIOInput()
	{};

	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) ;

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

	virtual int32 GetOwnerUserIndex() const { return 8; };
protected:



};

