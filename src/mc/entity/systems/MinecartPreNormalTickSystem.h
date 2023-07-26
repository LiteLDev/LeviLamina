#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class MinecartPreNormalTickSystem {

public:
    // prevent constructor by default
    MinecartPreNormalTickSystem& operator=(MinecartPreNormalTickSystem const&) = delete;
    MinecartPreNormalTickSystem(MinecartPreNormalTickSystem const&)            = delete;
    MinecartPreNormalTickSystem()                                              = delete;

public:
    /**
     * @symbol ?createSystem\@MinecartPreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doMinecartPreNormalTickSystem\@MinecartPreNormalTickSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMinecartPreNormalTickBlockPosComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _doMinecartPreNormalTickSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MinecartPreNormalTickBlockPosComponent>); // NOLINT

private:
};
