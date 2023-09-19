#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedEvent {
public:
    // prevent constructor by default
    ActorDiedEvent& operator=(ActorDiedEvent const&);
    ActorDiedEvent(ActorDiedEvent const&);
    ActorDiedEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ActorDiedEvent@@QEAA@XZ
    MCAPI ~ActorDiedEvent();

    // NOLINTEND
};
