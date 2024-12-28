#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ServerAnimationSystem {
public:
    // prevent constructor by default
    ServerAnimationSystem& operator=(ServerAnimationSystem const&);
    ServerAnimationSystem(ServerAnimationSystem const&);
    ServerAnimationSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createInputDependentActorServerAnimationSystem();

    MCAPI static ::TickingSystemWithInfo createInputIndependentActorServerAnimationSystem();
    // NOLINTEND
};
