#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/GameType.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<4, 4, ::GameType>                                mFromGameMode;
    ::ll::TypedStorage<4, 4, ::GameType>                                mToGameMode;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
