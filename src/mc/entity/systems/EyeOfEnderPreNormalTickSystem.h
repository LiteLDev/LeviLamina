#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    MCAPI static void _tickEyeOfEnderPreNormalTickSystem(class ViewT<
                                                         class StrictEntityContext,
                                                         struct Include<
                                                             class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                             class FlagComponent<struct EyeOfEnderFlag>>,
                                                         class ActorOwnerComponent> view);

    // NOLINTEND
};
