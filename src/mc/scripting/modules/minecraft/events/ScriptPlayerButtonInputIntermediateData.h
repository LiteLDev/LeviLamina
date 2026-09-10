#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerButtonInputIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButton>                    mButton;
    ::ll::TypedStorage<4, 4, ::ScriptingInputButtonState>               mNewState;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
