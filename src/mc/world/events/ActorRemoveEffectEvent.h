#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemoveEffectEvent {
public:
    // prevent constructor by default
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&);
    ActorRemoveEffectEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorRemoveEffectEvent@@QEAA@AEBU0@@Z
    MCAPI ActorRemoveEffectEvent(struct ActorRemoveEffectEvent const&);

    // symbol: ??1ActorRemoveEffectEvent@@QEAA@XZ
    MCAPI ~ActorRemoveEffectEvent();

    // NOLINTEND
};
