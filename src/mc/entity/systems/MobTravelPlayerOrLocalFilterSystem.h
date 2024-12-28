#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MobTravelPlayerOrLocalFilterSystem {
public:
    // prevent constructor by default
    MobTravelPlayerOrLocalFilterSystem& operator=(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
