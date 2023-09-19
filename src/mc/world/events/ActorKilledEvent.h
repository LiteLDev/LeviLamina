#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorKilledEvent {
public:
    // prevent constructor by default
    ActorKilledEvent& operator=(ActorKilledEvent const&);
    ActorKilledEvent(ActorKilledEvent const&);
    ActorKilledEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ActorKilledEvent@@QEAA@XZ
    MCAPI ~ActorKilledEvent();

    // NOLINTEND
};
