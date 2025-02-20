#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct TickingSystemWithInfo;
// clang-format on

struct GroundTravelTypeSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create(::BaseGameVersion const& version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& FRICTION_FIX_VERSION();
    // NOLINTEND
};
