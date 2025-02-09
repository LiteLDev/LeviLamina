#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct PlayerDisconnectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerDisconnectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
