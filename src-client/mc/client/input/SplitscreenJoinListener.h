#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class SplitscreenJoinListener {
public:
    // SplitscreenJoinListener inner types declare
    // clang-format off
    struct SplitscreenJoinTracker;
    // clang-format on

    // SplitscreenJoinListener inner types define
    enum class SplitscreenJoinInputState : int {};

    struct SplitscreenJoinTracker {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SplitscreenJoinListener::SplitscreenJoinTracker> mJoinTracker;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>            mLastToastTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleAddClientRequest(::IMinecraftGame& mg, int controllerId, bool isConfirmation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::chrono::seconds const& sJoinConfirmationTimeout();
    // NOLINTEND
};
