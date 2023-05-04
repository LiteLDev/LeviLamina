/**
 * @file  SoulSpeedAttributeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SoulSpeedAttributeSystem.
 *
 */
class SoulSpeedAttributeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULSPEEDATTRIBUTESYSTEM
public:
    class SoulSpeedAttributeSystem& operator=(class SoulSpeedAttributeSystem const &) = delete;
    SoulSpeedAttributeSystem(class SoulSpeedAttributeSystem const &) = delete;
    SoulSpeedAttributeSystem() = delete;
#endif

public:
    /**
     * @symbol ?_tryProcessSoulSpeed\@SoulSpeedAttributeSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryProcessSoulSpeed(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @symbol ?createSystem\@SoulSpeedAttributeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tickSystem\@SoulSpeedAttributeSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void tickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct MobFlag>>, class ActorOwnerComponent>);

};
