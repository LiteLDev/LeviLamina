#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemoveEffectEvent {
public:
    // prevent constructor by default
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&);
    ActorRemoveEffectEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorRemoveEffectEvent(struct ActorRemoveEffectEvent const&);

    MCAPI ~ActorRemoveEffectEvent();

    // NOLINTEND
};
