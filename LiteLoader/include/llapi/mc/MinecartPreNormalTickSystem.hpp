/**
 * @file  MinecartPreNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartPreNormalTickSystem.
 *
 */
class MinecartPreNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTPRENORMALTICKSYSTEM
public:
    class MinecartPreNormalTickSystem& operator=(class MinecartPreNormalTickSystem const &) = delete;
    MinecartPreNormalTickSystem(class MinecartPreNormalTickSystem const &) = delete;
    MinecartPreNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@MinecartPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doMinecartPreNormalTickSystem\@MinecartPreNormalTickSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMinecartPreNormalTickBlockPosComponent\@\@\@\@\@Z
     */
    MCAPI static void _doMinecartPreNormalTickSystem(class StrictEntityContext &, class ActorOwnerComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MinecartPreNormalTickBlockPosComponent>);

private:

};