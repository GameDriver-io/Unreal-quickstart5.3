#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
//#include "Engine.h"
#if WITH_EDITOR
//#include "UnrealEd.h"
#include "Engine/Selection.h"
#endif

//#include "Engine.h"
//#include "SlateBasics.h"
//#include "SlateExtras.h"
//#include "Internationalization.h"
//#include "MultiBoxExtender.h"
#include "Editor/LevelEditor/Public/LevelEditor.h"
//#include "Editor/PropertyEditor/Public/PropertyEditing.h"
#include "IAssetTypeActions.h"

#include "Modules/ModuleManager.h"
#include "../IExampleModuleInterface.h"


//#include "ModuleManager.h"


class HPathDebugger :  public IExampleModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual void AddModuleListeners() override;



	static inline HPathDebugger& Get()
	{
		return FModuleManager::LoadModuleChecked< HPathDebugger >("HPathDebugger");
	}
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("HPathDebugger");
	}


	void AddMenuExtension(const FMenuExtensionDelegate& extensionDelegate, FName extensionHook, const TSharedPtr<FUICommandList>& CommandList = NULL, EExtensionHook::Position position = EExtensionHook::Before);
	TSharedRef<FWorkspaceItem> GetMenuRoot() { return MenuRoot; };

	//The actual GDIo stuff
	UFUNCTION(BlueprintCallable)
	static int resolveHPath(FString s);
	static int testFunction();
	static int doubleInt(int i);
	static bool getResolveHPathFromDll();
	static bool getTestFunctionFromDll();
	static bool getDoubleIntFromDll();
	
protected:	

	//Menu Variables
	TSharedPtr<FExtensibilityManager> LevelEditorMenuExtensibilityManager;
	TSharedPtr<FExtender> MenuExtender;

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	static TSharedRef<FWorkspaceItem> MenuRoot;
	void MakePulldownMenu(FMenuBarBuilder& menuBuilder);
	void FillPulldownMenu(FMenuBuilder& menuBuilder);
};
