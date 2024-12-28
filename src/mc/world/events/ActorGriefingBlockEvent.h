#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk22e528;
    ::ll::UntypedStorage<8, 8>  mUnkff253e;
    ::ll::UntypedStorage<4, 12> mUnk949a50;
    ::ll::UntypedStorage<8, 16> mUnkfa0dfe;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorGriefingBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
