#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonBaseGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonBaseGoal& operator=(DragonBaseGoal const&);
    DragonBaseGoal(DragonBaseGoal const&);
    DragonBaseGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonBaseGoal();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
