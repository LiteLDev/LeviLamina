#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 24> mUnk171dc0;
    ::ll::UntypedStorage<8, 24> mUnk53d0c3;
    ::ll::UntypedStorage<4, 4>  mUnkf545fd;
    ::ll::UntypedStorage<4, 4>  mUnk10914e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAttackEvent& operator=(ActorAttackEvent const&);
    ActorAttackEvent(ActorAttackEvent const&);
    ActorAttackEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorAttackEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
