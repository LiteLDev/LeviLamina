#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDieEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk472d7a;
    ::ll::UntypedStorage<8, 8>  mUnkd16cd3;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDieEvent& operator=(ActorDieEvent const&);
    ActorDieEvent(ActorDieEvent const&);
    ActorDieEvent();
};
