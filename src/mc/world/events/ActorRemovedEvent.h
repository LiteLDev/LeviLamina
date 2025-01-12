#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdea3aa;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRemovedEvent& operator=(ActorRemovedEvent const&);
    ActorRemovedEvent(ActorRemovedEvent const&);
    ActorRemovedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorRemovedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
