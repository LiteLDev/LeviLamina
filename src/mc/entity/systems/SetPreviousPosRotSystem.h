#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class SetPreviousPosRotSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSPOSROTSYSTEM
public:
    SetPreviousPosRotSystem& operator=(SetPreviousPosRotSystem const&) = delete;
    SetPreviousPosRotSystem(SetPreviousPosRotSystem const&)            = delete;
    SetPreviousPosRotSystem()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?_setPreviousPosRot\@SetPreviousPosRotSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUStateVectorComponent\@\@AEAUActorRotationComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UPrevPosRotSetThisTickFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _setPreviousPosRot(class StrictEntityContext&, struct StateVectorComponent&, struct ActorRotationComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PrevPosRotSetThisTickFlag>>);
};
