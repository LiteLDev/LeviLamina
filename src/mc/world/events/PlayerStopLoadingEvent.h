#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerStopLoadingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~PlayerStopLoadingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
