#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MovementTickResetTemporaryComponentsSystem {
public:
    // prevent constructor by default
    MovementTickResetTemporaryComponentsSystem& operator=(MovementTickResetTemporaryComponentsSystem const&);
    MovementTickResetTemporaryComponentsSystem(MovementTickResetTemporaryComponentsSystem const&);
    MovementTickResetTemporaryComponentsSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
