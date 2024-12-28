#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LocalMoveVelocityComponent;
struct MobIsJumpingFlagComponent;
struct MobRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ImmobileSystem {
public:
    // prevent constructor by default
    ImmobileSystem& operator=(ImmobileSystem const&);
    ImmobileSystem(ImmobileSystem const&);
    ImmobileSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void doImmobileSystem(
        ::StrictEntityContext const&                  context,
        ::LocalMoveVelocityComponent&                 localMoveVelocityComponent,
        ::MobRotationComponent&                       mobRotationComponent,
        ::StateVectorComponent&                       stateVectorComponent,
        ::EntityModifier<::MobIsJumpingFlagComponent> mod
    );
    // NOLINTEND
};
