#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorCarriedItemChangedEvent {
public:
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&);
    ActorCarriedItemChangedEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorCarriedItemChangedEvent@@QEAA@AEBU0@@Z
    MCAPI ActorCarriedItemChangedEvent(struct ActorCarriedItemChangedEvent const&);

    // symbol: ??1ActorCarriedItemChangedEvent@@QEAA@XZ
    MCAPI ~ActorCarriedItemChangedEvent();

    // NOLINTEND
};
