#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct EnderManPreAIStepSystem {
public:
    // prevent constructor by default
    EnderManPreAIStepSystem& operator=(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
