#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#else
#include "Templates/SharedPointerInternals.h"
#include "Templates/SharedPointer.h"
#endif

#include "GDIOInput.h"
#include "Framework/Application/SlateApplication.h"
#include "RecorderTool.h"
#include "SlateBasics.h"
#include "Blueprint/WidgetTree.h"
#include "GenericPlatform/GenericPlatformProcess.h"

class RecorderToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(RecorderToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class RecorderTool>, Tool)

	//	SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	
	bool DownloadEnabled() const;
	bool RecordEnabled() const;
	const FSlateBrush* GetRecordIcon() const;
	const FSlateBrush* GetInfoIcon() const;
	const FSlateBrush* GetResetIcon() const;
	FReply RecordClicked();
	FReply ResetClicked();
	FReply InfoClicked();
	FReply DownloadClicked();
	FReply LoadScene();
	FReply GetObjectPosition();
	FReply SetObjectPosition();
	FReply WaitForObject();
	FReply ClickObject();
	void SetFPS(ECheckBoxState);

	//void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	FText GetRecordTooltip() const;
	void AddOutput(FString newline, int specialCode = 0, FString key = "");
	static FString GetHPath(UObject* obj, FString* CurrentItem);
	static UObject* GetAttachParentUObject(UObject* actor);
	static TArray<FString> GetObjectTags(UObject* obj);
	TSharedRef<SWidget> MakeWidgetForOption(TSharedPtr<FString> InOption)
	{
		return SNew(STextBlock).Text(FText::FromString(*InOption));
	}

	void OnSelectionChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type)
	{
		CurrentItem = NewValue;
	}

	FText GetCurrentItemLabel() const
	{
		
		if (CurrentItem.IsValid())
		{
			return FText::FromString(*CurrentItem);
		}

		return  FText::FromString( "<<Invalid option>>");
		
	}

	TSharedPtr<FString> CurrentItem;
	TArray<TSharedPtr<FString>> Options;
	bool GetFPS() { return useFPS; }
	bool IsRecording() { return recording; }

	void OnBrowseWorld(UWorld* InWorld);
protected:
	bool recording;
	bool useFPS;
	TWeakPtr<RecorderTool> tool;

	TArray<TSharedPtr<FString>> SourceHPathComboList;
	
	/* The actual UI list */
	TSharedPtr<SMultiLineEditableText> outputText;
	TSharedPtr<SScrollBox> outputScroll;
	TArray<FString> *outputArray;
	TMap<FString,int>* delayedVREvents;
	//The IInputProcessor
#if ENGINE_MAJOR_VERSION == 4
	SharedPointerInternals::FRawPtrProxy< FGDIOInput > inputProcessor = NULL;
#else
	TSharedPtr< class FGDIOInput > inputProcessor = NULL;
#endif
};