#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHealthChangedEvent {
public:
    // prevent constructor by default
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent(ActorHealthChangedEvent const&);
    ActorHealthChangedEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ActorHealthChangedEvent();

    // NOLINTEND
};
