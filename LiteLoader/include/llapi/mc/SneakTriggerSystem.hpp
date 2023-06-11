/**
 * @file  SneakTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SneakTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKTRIGGERSYSTEM
public:
    class SneakTriggerSystem& operator=(class SneakTriggerSystem const &) = delete;
    SneakTriggerSystem(class SneakTriggerSystem const &) = delete;
    SneakTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createTriggerSystem\@SneakTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createTriggerSystem(bool);
    /**
     * @symbol ?determinePose\@SneakTriggerSystem\@\@SA?AUPlayerPoseTransitions\@1\@AEAUDeterminePoseArgs\@1\@\@Z
     */
    MCAPI static struct SneakTriggerSystem::PlayerPoseTransitions determinePose(struct SneakTriggerSystem::DeterminePoseArgs &);
    /**
     * @symbol ?doSneakTriggerSystemClient\@SneakTriggerSystem\@\@SAXAEAUDeterminePoseArgs\@1\@AEBVStrictEntityContext\@\@AEAUPlayerActionComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void doSneakTriggerSystemClient(struct SneakTriggerSystem::DeterminePoseArgs &, class StrictEntityContext const &, struct PlayerActionComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldUpdateBoundingBoxRequestComponent>);

};
