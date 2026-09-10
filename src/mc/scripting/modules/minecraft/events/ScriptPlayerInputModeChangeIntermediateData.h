#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInputModeChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::InputMode>                               mNewInputModeUsed;
    ::ll::TypedStorage<4, 4, ::InputMode>                               mPreviousInputModeUsed;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
