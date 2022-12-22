#include "TabTool.h"
//#include "AssetRegistryModule.h"
//#include "ScopedTransaction.h"
//#include "SDockTab.h"
//#include "SDockableTab.h"
//#include "SDockTabStack.h"
//#include "SlateApplication.h"
#include "../Public/HPathDebugger.h"
#include "TabToolPanel.h"

void TabTool::OnStartupModule()
{
	FExampleTabToolBase::OnStartupModule();
	HPathDebugger::Get().AddMenuExtension(FMenuExtensionDelegate::CreateRaw(this, &TabTool::MakeMenuEntry), FName("HPATH"));
}

void TabTool::OnShutdownModule()
{
	FExampleTabToolBase::OnShutdownModule();
}

void TabTool::Initialize()
{
	TabName = "TabTool";
	TabDisplayName = FText::FromString("HPath Debugger");
	ToolTipText = FText::FromString("HPath Debugger Window");
}

TSharedRef<SDockTab> TabTool::SpawnTab(const FSpawnTabArgs& TabSpawnArgs)
{
	TSharedRef<SDockTab> SpawnedTab = SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(TabToolPanel)
			.Tool(SharedThis(this))
		];

	return SpawnedTab;
}