#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

struct ScriptingWorldInitializeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry&>
        mBlockCustomComponentRegistry;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry&> mItemCustomComponentRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptingWorldInitializeEvent& operator=(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent(ScriptingWorldInitializeEvent const&);
    ScriptingWorldInitializeEvent();
};
