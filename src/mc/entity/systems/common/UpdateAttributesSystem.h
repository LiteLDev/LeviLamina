#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateAttributesSystem {
public:
    // prevent constructor by default
    UpdateAttributesSystem& operator=(UpdateAttributesSystem const&);
    UpdateAttributesSystem(UpdateAttributesSystem const&);
    UpdateAttributesSystem();

public:
    // NOLINTBEGIN
    // symbol: ?copyMovementAttributes@UpdateAttributesSystem@@SA?AUAttributesComponent@@AEBU2@@Z
    MCAPI static struct AttributesComponent copyMovementAttributes(struct AttributesComponent const&);

    // symbol: ?createProcessRequestSystem@UpdateAttributesSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createProcessRequestSystem();

    // symbol: ?createUpdateSystem@UpdateAttributesSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createUpdateSystem();

    // NOLINTEND
};
