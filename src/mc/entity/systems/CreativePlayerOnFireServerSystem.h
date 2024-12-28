#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class CreativePlayerOnFireServerSystem {
public:
    // prevent constructor by default
    CreativePlayerOnFireServerSystem& operator=(CreativePlayerOnFireServerSystem const&);
    CreativePlayerOnFireServerSystem(CreativePlayerOnFireServerSystem const&);
    CreativePlayerOnFireServerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
