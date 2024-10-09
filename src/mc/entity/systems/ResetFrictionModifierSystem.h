#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class ResetFrictionModifierSystem {
public:
    // prevent constructor by default
    ResetFrictionModifierSystem& operator=(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem(ResetFrictionModifierSystem const&);
    ResetFrictionModifierSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickResetFrictionModifierSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PlayerInputRequestComponent>,
            struct FrictionModifierComponent> view
    );

    // NOLINTEND
};
