#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHurtEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk98bf52;
    ::ll::UntypedStorage<8, 16> mUnk513431;
    ::ll::UntypedStorage<4, 4>  mUnkadbeed;
    ::ll::UntypedStorage<4, 4>  mUnk245830;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHurtEvent& operator=(ActorHurtEvent const&);
    ActorHurtEvent(ActorHurtEvent const&);
    ActorHurtEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorHurtEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
