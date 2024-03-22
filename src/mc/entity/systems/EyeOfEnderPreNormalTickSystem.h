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
    // symbol: ?createSystem@EyeOfEnderPreNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doEyeOfEnderPreNormalTickSystem@EyeOfEnderPreNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doEyeOfEnderPreNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickEyeOfEnderPreNormalTickSystem@EyeOfEnderPreNormalTickSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UEyeOfEnderFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickEyeOfEnderPreNormalTickSystem(class ViewT<
                                                         class StrictEntityContext,
                                                         struct Include<
                                                             class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                             class FlagComponent<struct EyeOfEnderFlag>>,
                                                         class ActorOwnerComponent> view);

    // NOLINTEND
};
