#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct StoreAbilitiesForPlayerInputSystem {
public:
    // prevent constructor by default
    StoreAbilitiesForPlayerInputSystem& operator=(StoreAbilitiesForPlayerInputSystem const&);
    StoreAbilitiesForPlayerInputSystem(StoreAbilitiesForPlayerInputSystem const&);
    StoreAbilitiesForPlayerInputSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
