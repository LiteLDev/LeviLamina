#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class SetPreviousPosRotSystem {
public:
    // prevent constructor by default
    SetPreviousPosRotSystem& operator=(SetPreviousPosRotSystem const&);
    SetPreviousPosRotSystem(SetPreviousPosRotSystem const&);
    SetPreviousPosRotSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_setPreviousPosRot@SetPreviousPosRotSystem@@SAXAEAVStrictEntityContext@@AEAUStateVectorComponent@@AEAUActorRotationComponent@@V?$EntityModifier@V?$FlagComponent@UPrevPosRotSetThisTickFlag@@@@@@@Z
    MCAPI static void _setPreviousPosRot(
        class StrictEntityContext& entity,
        struct StateVectorComponent&,
        struct ActorRotationComponent&,
        class EntityModifier<class FlagComponent<struct PrevPosRotSetThisTickFlag>> modifier
    );

    // symbol: ?_setPreviousPosRotSystem@SetPreviousPosRotSystem@@SAXAEBVEntityContext@@@Z
    MCAPI static void _setPreviousPosRotSystem(class EntityContext const&);

    // NOLINTEND
};
