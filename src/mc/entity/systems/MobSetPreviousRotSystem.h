#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MobSetPreviousRotSystem {
public:
    // prevent constructor by default
    MobSetPreviousRotSystem& operator=(MobSetPreviousRotSystem const&);
    MobSetPreviousRotSystem(MobSetPreviousRotSystem const&);
    MobSetPreviousRotSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MobSetPreviousRotSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol:
    // ?tick@MobSetPreviousRotSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMobFlag@@@@@@UActorHeadRotationComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@@@@Z
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           struct Include<
                               class FlagComponent<struct ActorMovementTickNeededFlag>,
                               class FlagComponent<struct MobFlag>>,
                           struct ActorHeadRotationComponent,
                           struct ActorRotationComponent,
                           struct MobBodyRotationComponent>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_setPreviousRotation@MobSetPreviousRotSystem@@CAXAEAVStrictEntityContext@@AEAUActorHeadRotationComponent@@AEAUActorRotationComponent@@AEAUMobBodyRotationComponent@@@Z
    MCAPI static void
    _setPreviousRotation(class StrictEntityContext&, struct ActorHeadRotationComponent&, struct ActorRotationComponent&, struct MobBodyRotationComponent&);

    // NOLINTEND
};
