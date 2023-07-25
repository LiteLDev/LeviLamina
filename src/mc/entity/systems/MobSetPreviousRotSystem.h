#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MobSetPreviousRotSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSETPREVIOUSROTSYSTEM
public:
    MobSetPreviousRotSystem& operator=(MobSetPreviousRotSystem const&) = delete;
    MobSetPreviousRotSystem(MobSetPreviousRotSystem const&)            = delete;
    MobSetPreviousRotSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MobSetPreviousRotSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tick\@MobSetPreviousRotSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@UActorHeadRotationComponent\@\@UActorRotationComponent\@\@UMobBodyRotationComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           class EntityRegistryBase,
                           struct Include<
                               class FlagComponent<struct ActorMovementTickNeededFlag>,
                               class FlagComponent<struct MobFlag>>,
                           struct ActorHeadRotationComponent,
                           struct ActorRotationComponent,
                           struct MobBodyRotationComponent>);

    // private:
    /**
     * @symbol
     * ?_setPreviousRotation\@MobSetPreviousRotSystem\@\@CAXAEAVStrictEntityContext\@\@AEAUActorHeadRotationComponent\@\@AEAUActorRotationComponent\@\@AEAUMobBodyRotationComponent\@\@\@Z
     */
    MCAPI static void
    _setPreviousRotation(class StrictEntityContext&, struct ActorHeadRotationComponent&, struct ActorRotationComponent&, struct MobBodyRotationComponent&);

private:
};
