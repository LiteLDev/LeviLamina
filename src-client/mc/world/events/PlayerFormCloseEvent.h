#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/events/PlayerFormCloseReason.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerFormCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, uint>                        mFormId;
    ::ll::TypedStorage<4, 4, ::PlayerFormCloseReason>     mFormCloseReason;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerFormCloseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
