#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorAttackEvent {
public:
    // ActorAttackEvent inner types define
    enum class AttackType : int {
        Melee  = 0,
        Ranged = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mEntity;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mTarget;
    ::ll::TypedStorage<4, 4, int>                            mDamage;
    ::ll::TypedStorage<4, 4, ::ActorAttackEvent::AttackType> mAttackType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorAttackEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
