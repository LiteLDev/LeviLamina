#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk73a5af;
    ::ll::UntypedStorage<8, 16> mUnk4a74ce;
    ::ll::UntypedStorage<4, 4>  mUnkf9453a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDiedEvent& operator=(ActorDiedEvent const&);
    ActorDiedEvent(ActorDiedEvent const&);
    ActorDiedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDiedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
