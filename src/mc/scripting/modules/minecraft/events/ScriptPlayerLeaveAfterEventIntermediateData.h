#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptPlayerLeaveAfterEventIntermediateData(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
