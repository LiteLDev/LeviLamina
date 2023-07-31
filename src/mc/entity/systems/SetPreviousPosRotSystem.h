#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class SetPreviousPosRotSystem {

public:
    // prevent constructor by default
    SetPreviousPosRotSystem& operator=(SetPreviousPosRotSystem const&) = delete;
    SetPreviousPosRotSystem(SetPreviousPosRotSystem const&)            = delete;
    SetPreviousPosRotSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_setPreviousPosRot\@SetPreviousPosRotSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUStateVectorComponent\@\@AEAUActorRotationComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UPrevPosRotSetThisTickFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _setPreviousPosRot(class StrictEntityContext&, struct StateVectorComponent&, struct ActorRotationComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PrevPosRotSetThisTickFlag>>);
    // NOLINTEND
};
