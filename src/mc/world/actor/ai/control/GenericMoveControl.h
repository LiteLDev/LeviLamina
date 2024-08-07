#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

class GenericMoveControl : public ::MoveControl {
public:
    // prevent constructor by default
    GenericMoveControl& operator=(GenericMoveControl const&);
    GenericMoveControl(GenericMoveControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericMoveControl();

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(class MoveControlComponent& parent, class Mob& mob);

    MCAPI GenericMoveControl();

    // NOLINTEND
};
