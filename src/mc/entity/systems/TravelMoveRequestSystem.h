#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct TravelMoveRequestSystem {
public:
    // prevent constructor by default
    TravelMoveRequestSystem& operator=(TravelMoveRequestSystem const&);
    TravelMoveRequestSystem(TravelMoveRequestSystem const&);
    TravelMoveRequestSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
