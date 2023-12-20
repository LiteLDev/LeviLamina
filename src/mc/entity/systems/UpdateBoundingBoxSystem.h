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
    // symbol: ?createSystem@UpdateBoundingBoxSystem@@SA?AUTickingSystemWithInfo@@AEBVBaseGameVersion@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const&, bool);

    // symbol: ?synchronousUpdateSize@UpdateBoundingBoxSystem@@SAXAEAVEntityContext@@AEBVBaseGameVersion@@_N@Z
    MCAPI static void synchronousUpdateSize(class EntityContext&, class BaseGameVersion const&, bool);

    // NOLINTEND
};
