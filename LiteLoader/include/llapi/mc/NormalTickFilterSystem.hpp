/**
 * @file  NormalTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NormalTickFilterSystem.
 *
 */
class NormalTickFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NORMALTICKFILTERSYSTEM
public:
    class NormalTickFilterSystem& operator=(class NormalTickFilterSystem const &) = delete;
    NormalTickFilterSystem(class NormalTickFilterSystem const &) = delete;
    NormalTickFilterSystem() = delete;
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
     * @symbol ?tickGenericSystem\@NormalTickFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBVDimensionStateComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickGenericSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, class Optional<class DimensionStateComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipNormalTick>>);
    /**
     * @symbol ?tickLocalPlayerSystem\@NormalTickFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBVLoadingStateComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickLocalPlayerSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, class Optional<class LoadingStateComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipNormalTick>>);

};
