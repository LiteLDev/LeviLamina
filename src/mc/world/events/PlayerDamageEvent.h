#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
// clang-format on

struct PlayerDamageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>            mPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDamageSource>> mDamageSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerDamageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
