#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemoveEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk378e5f;
    ::ll::UntypedStorage<8, 136> mUnk8a9e5e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&);
    ActorRemoveEffectEvent(ActorRemoveEffectEvent const&);
    ActorRemoveEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorRemoveEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
