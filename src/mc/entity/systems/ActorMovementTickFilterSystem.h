#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorMovementTickFilterSystem {
public:
    // prevent constructor by default
    ActorMovementTickFilterSystem& operator=(ActorMovementTickFilterSystem const&);
    ActorMovementTickFilterSystem(ActorMovementTickFilterSystem const&);
    ActorMovementTickFilterSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createBase();
    // NOLINTEND
};
