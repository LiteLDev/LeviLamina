#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

struct ScriptModuleStartupEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&>  mItemComponentRegistry;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&> mBlockComponentRegistry;
    ::ll::TypedStorage<8, 24, ::std::optional<::Scripting::WeakLifetimeScope>>              mSpecificScopeForEvent;
    // NOLINTEND
};
