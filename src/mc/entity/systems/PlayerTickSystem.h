#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerTickComponent;
struct TickingSystemWithInfo;
// clang-format on

struct PlayerTickSystem {
public:
    // prevent constructor by default
    PlayerTickSystem& operator=(PlayerTickSystem const&);
    PlayerTickSystem(PlayerTickSystem const&);
    PlayerTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create(bool isCatchup);

    MCAPI static ::TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();
    // NOLINTEND
};
