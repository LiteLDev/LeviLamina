#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPlayerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerJoinAfterEventIntermediateData(::Player& player);

    MCAPI ~ScriptPlayerJoinAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
