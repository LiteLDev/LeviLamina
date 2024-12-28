#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class VariableMaxAutoStepSystem {
public:
    // prevent constructor by default
    VariableMaxAutoStepSystem& operator=(VariableMaxAutoStepSystem const&);
    VariableMaxAutoStepSystem(VariableMaxAutoStepSystem const&);
    VariableMaxAutoStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
    // NOLINTEND
};
