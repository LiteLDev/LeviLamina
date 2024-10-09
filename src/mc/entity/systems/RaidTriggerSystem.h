#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidTriggerSystem {
public:
    // prevent constructor by default
    RaidTriggerSystem& operator=(RaidTriggerSystem const&);
    RaidTriggerSystem(RaidTriggerSystem const&);
    RaidTriggerSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doRaidTriggerSystem(
        struct DimensionTypeComponent const&            dimensionTypeComponent,
        struct GainedRaidOmenAtPositionComponent const& gainedRaidOmen,
        class ActorOwnerComponent&                      actorOwnerComponent,
        struct VillageManagerComponent const&           villageManagerComponent
    );

    // NOLINTEND
};
