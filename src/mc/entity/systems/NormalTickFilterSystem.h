#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class NormalTickFilterSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NORMALTICKFILTERSYSTEM
public:
    NormalTickFilterSystem& operator=(NormalTickFilterSystem const&) = delete;
    NormalTickFilterSystem(NormalTickFilterSystem const&)            = delete;
    NormalTickFilterSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createGenericSystem\@NormalTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createGenericSystem();
    /**
     * @symbol ?createLocalPlayerSystem\@NormalTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerSystem();
    /**
     * @symbol
     * ?tickGenericSystem\@NormalTickFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBVDimensionStateComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickGenericSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, class Optional<class DimensionStateComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipNormalTick>>);
    /**
     * @symbol
     * ?tickLocalPlayerSystem\@NormalTickFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBVLoadingStateComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickLocalPlayerSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, class Optional<class LoadingStateComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipNormalTick>>);
};
