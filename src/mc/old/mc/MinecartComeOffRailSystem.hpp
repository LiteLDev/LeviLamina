/**
 * @file  MinecartComeOffRailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartComeOffRailSystem.
 *
 */
class MinecartComeOffRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMEOFFRAILSYSTEM
public:
    class MinecartComeOffRailSystem& operator=(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem(class MinecartComeOffRailSystem const &) = delete;
    MinecartComeOffRailSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_minecartComeOffRailSystem\@MinecartComeOffRailSystem\@\@SAXAEAVStrictEntityContext\@\@AEBVRailMovementComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _minecartComeOffRailSystem(class StrictEntityContext &, class RailMovementComponent const &, struct StateVectorComponent &, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);
    /**
     * @symbol  ?createSystem\@MinecartComeOffRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};