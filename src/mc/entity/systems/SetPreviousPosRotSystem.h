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
    MCAPI static void _setPreviousPosRot(
        class StrictEntityContext& entity,
        struct StateVectorComponent&,
        struct ActorRotationComponent&,
        class EntityModifier<class FlagComponent<struct PrevPosRotSetThisTickFlag>> modifier
    );

    MCAPI static void _setPreviousPosRotSystem(class EntityContext const&);

    // NOLINTEND
};
