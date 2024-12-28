#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelAddedActorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf04e72;
    ::ll::UntypedStorage<8, 24> mUnk97811f;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelAddedActorEvent& operator=(LevelAddedActorEvent const&);
    LevelAddedActorEvent(LevelAddedActorEvent const&);
    LevelAddedActorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelAddedActorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
