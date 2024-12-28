#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAcquiredItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk374850;
    ::ll::UntypedStorage<8, 128> mUnkad6896;
    ::ll::UntypedStorage<4, 4>   mUnke20466;
    ::ll::UntypedStorage<4, 4>   mUnkc3e722;
    ::ll::UntypedStorage<8, 24>  mUnk61aa4c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&);
    ActorAcquiredItemEvent(ActorAcquiredItemEvent const&);
    ActorAcquiredItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorAcquiredItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
