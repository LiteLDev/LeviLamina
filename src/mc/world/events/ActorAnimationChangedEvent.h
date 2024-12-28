#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAnimationChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkba8625;
    ::ll::UntypedStorage<4, 4>  mUnkf48c06;
    ::ll::UntypedStorage<4, 4>  mUnk4216d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationChangedEvent& operator=(ActorAnimationChangedEvent const&);
    ActorAnimationChangedEvent(ActorAnimationChangedEvent const&);
    ActorAnimationChangedEvent();
};
