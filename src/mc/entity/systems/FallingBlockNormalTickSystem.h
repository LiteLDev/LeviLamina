#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class FallingBlockNormalTickSystem {
public:
    // prevent constructor by default
    FallingBlockNormalTickSystem& operator=(FallingBlockNormalTickSystem const&);
    FallingBlockNormalTickSystem(FallingBlockNormalTickSystem const&);
    FallingBlockNormalTickSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doFallingBlockNormalTickSystem(
        class StrictEntityContext const&,
        class ActorOwnerComponent& actorOwnerComponent,
        class ITickDelegate&       onLand
    );

    MCAPI static void _tickFallingBlockNormalTickSystem(class ViewT<
                                                        class StrictEntityContext,
                                                        struct Include<
                                                            class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                            class FlagComponent<struct FallingBlockFlag>>,
                                                        class ActorOwnerComponent> view);

    // NOLINTEND
};
