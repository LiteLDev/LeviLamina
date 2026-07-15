#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
struct MoveControlDescription;
// clang-format on

class SwimMoveControl : public ::MoveControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription const* description) /*override*/;

    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeInternal(::Mob& mob, ::MoveControlDescription const* description);

    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);


    // NOLINTEND
};
