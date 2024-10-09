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
    MCAPI static struct AttributesComponent copyMovementAttributes(struct AttributesComponent const& attributes);

    MCAPI static struct TickingSystemWithInfo createProcessRequestSystem();

    MCAPI static struct TickingSystemWithInfo createUpdateSystem();

    // NOLINTEND
};
