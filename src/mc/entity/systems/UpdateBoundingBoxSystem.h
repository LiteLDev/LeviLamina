#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateBoundingBoxSystem {
public:
    // prevent constructor by default
    UpdateBoundingBoxSystem& operator=(UpdateBoundingBoxSystem const&);
    UpdateBoundingBoxSystem(UpdateBoundingBoxSystem const&);
    UpdateBoundingBoxSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const&, bool);

    MCAPI static void synchronousUpdateSize(class EntityContext&, class BaseGameVersion const&, bool);

    // NOLINTEND
};
