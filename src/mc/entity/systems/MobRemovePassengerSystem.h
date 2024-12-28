#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MobRemovePassengerSystem {
public:
    // prevent constructor by default
    MobRemovePassengerSystem& operator=(MobRemovePassengerSystem const&);
    MobRemovePassengerSystem(MobRemovePassengerSystem const&);
    MobRemovePassengerSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
