#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorPostAiStepTickSystem {
public:
    // prevent constructor by default
    ActorPostAiStepTickSystem& operator=(ActorPostAiStepTickSystem const&);
    ActorPostAiStepTickSystem(ActorPostAiStepTickSystem const&);
    ActorPostAiStepTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
