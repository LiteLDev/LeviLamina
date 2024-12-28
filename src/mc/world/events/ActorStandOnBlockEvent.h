#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStandOnBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbc03fb;
    ::ll::UntypedStorage<8, 8>  mUnk5c9b02;
    ::ll::UntypedStorage<4, 12> mUnk16bf74;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorStandOnBlockEvent& operator=(ActorStandOnBlockEvent const&);
    ActorStandOnBlockEvent(ActorStandOnBlockEvent const&);
    ActorStandOnBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorStandOnBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
