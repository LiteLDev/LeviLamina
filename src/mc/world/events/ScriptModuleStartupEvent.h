#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
// clang-format on

struct ScriptModuleStartupEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&>  mItemComponentRegistry;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mBlockComponentRegistry;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry&>      mSpawnRulesRegistry;
    ::ll::TypedStorage<8, 24, ::std::optional<::Scripting::WeakLifetimeScope>>              mSpecificScopeForEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupEvent& operator=(ScriptModuleStartupEvent const&);
    ScriptModuleStartupEvent(ScriptModuleStartupEvent const&);
    ScriptModuleStartupEvent();
};
