#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class EyeOfEnderPreNormalTickSystem {
public:
    // prevent constructor by default
    EyeOfEnderPreNormalTickSystem& operator=(EyeOfEnderPreNormalTickSystem const&);
    EyeOfEnderPreNormalTickSystem(EyeOfEnderPreNormalTickSystem const&);
    EyeOfEnderPreNormalTickSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickEyeOfEnderPreNormalTickSystem(class ViewT<
                                                         class StrictEntityContext,
                                                         struct Include<
                                                             class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                             class FlagComponent<struct EyeOfEnderFlag>>,
                                                         class ActorOwnerComponent> view);

    // NOLINTEND
};
