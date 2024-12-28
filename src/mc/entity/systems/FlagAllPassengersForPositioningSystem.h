#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct FlagAllPassengersForPositioningSystem {
public:
    // prevent constructor by default
    FlagAllPassengersForPositioningSystem& operator=(FlagAllPassengersForPositioningSystem const&);
    FlagAllPassengersForPositioningSystem(FlagAllPassengersForPositioningSystem const&);
    FlagAllPassengersForPositioningSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
