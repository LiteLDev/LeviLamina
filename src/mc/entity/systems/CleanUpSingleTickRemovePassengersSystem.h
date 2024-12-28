#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct CleanUpSingleTickRemovePassengersSystem {
public:
    // prevent constructor by default
    CleanUpSingleTickRemovePassengersSystem& operator=(CleanUpSingleTickRemovePassengersSystem const&);
    CleanUpSingleTickRemovePassengersSystem(CleanUpSingleTickRemovePassengersSystem const&);
    CleanUpSingleTickRemovePassengersSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSingleTickSystem();
    // NOLINTEND
};
