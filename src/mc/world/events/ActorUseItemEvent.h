#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUseItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb8feb5;
    ::ll::UntypedStorage<8, 128> mUnkb912db;
    ::ll::UntypedStorage<4, 4>   mUnk67087b;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&);
    ActorUseItemEvent(ActorUseItemEvent const&);
    ActorUseItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorUseItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
