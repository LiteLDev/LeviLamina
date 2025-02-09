#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct PlayerGameModeChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<4, 4, ::GameType>       mFromGameMode;
    ::ll::TypedStorage<4, 4, ::GameType>       mToGameMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerGameModeChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
