#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct TickingSystemWithInfo;
// clang-format on

class MobSetPreviousRotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setPreviousRotation(
        ::StrictEntityContext&,
        ::ActorHeadRotationComponent& actorHeadRotation,
        ::ActorRotationComponent&     actorRotation,
        ::MobBodyRotationComponent&   mobBodyRotation
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
