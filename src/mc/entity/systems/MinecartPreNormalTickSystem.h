#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class MinecartPreNormalTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTPRENORMALTICKSYSTEM
public:
    MinecartPreNormalTickSystem& operator=(MinecartPreNormalTickSystem const&) = delete;
    MinecartPreNormalTickSystem(MinecartPreNormalTickSystem const&)            = delete;
    MinecartPreNormalTickSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MinecartPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doMinecartPreNormalTickSystem\@MinecartPreNormalTickSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMinecartPreNormalTickBlockPosComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _doMinecartPreNormalTickSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MinecartPreNormalTickBlockPosComponent>);

private:
};
