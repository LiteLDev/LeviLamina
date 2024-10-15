#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GlideMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    GlideMoveControl& operator=(GlideMoveControl const&);
    GlideMoveControl(GlideMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlideMoveControl() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob&, struct MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI GlideMoveControl();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void initializeInternal$(class Mob&, struct MoveControlDescription* description);

    MCAPI void tick$(class MoveControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
