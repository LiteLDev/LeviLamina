#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class SlimePreNormalTickSystem {

public:
    // prevent constructor by default
    SlimePreNormalTickSystem& operator=(SlimePreNormalTickSystem const&) = delete;
    SlimePreNormalTickSystem(SlimePreNormalTickSystem const&)            = delete;
    SlimePreNormalTickSystem()                                           = delete;

public:
    /**
     * @symbol ?createSystem\@SlimePreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doSlimePreNormalTickSystem\@SlimePreNormalTickSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USlimeWasOnGroundPreNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _doSlimePreNormalTickSystem(class StrictEntityContext&, class ActorOwnerComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>); // NOLINT

private:
};
