#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActionOrStopComponent;
struct LocalMoveVelocityComponent;
struct TickingSystemWithInfo;
// clang-format on

class FramewiseActionOrStopSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createFramewiseActionOrStopSystem();

    MCAPI static void doFramewiseActionOrStopSystem(
        ::LocalMoveVelocityComponent const& localMoveVelocityComponent,
        ::ActionOrStopComponent&            actionOrStopComponent
    );
    // NOLINTEND
};
