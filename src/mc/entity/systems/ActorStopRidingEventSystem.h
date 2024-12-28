#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorStopRidingEventSystem {
public:
    // prevent constructor by default
    ActorStopRidingEventSystem& operator=(ActorStopRidingEventSystem const&);
    ActorStopRidingEventSystem(ActorStopRidingEventSystem const&);
    ActorStopRidingEventSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createCancelableEventSystem();

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
