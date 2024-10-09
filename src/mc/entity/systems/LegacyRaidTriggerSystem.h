#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyRaidTriggerSystem {
public:
    // prevent constructor by default
    LegacyRaidTriggerSystem& operator=(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem(LegacyRaidTriggerSystem const&);
    LegacyRaidTriggerSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doRaidTriggerSystem(
        struct DimensionTypeComponent const&  dimensionTypeComponent,
        struct StateVectorComponent const&    stateVectorComponent,
        class ActorOwnerComponent&            actorOwnerComponent,
        struct VillageManagerComponent const& villageManagerComponent
    );

    // NOLINTEND
};
