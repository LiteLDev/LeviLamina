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

class GenericMoveControl : public ::MoveControl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericMoveControl() /*override*/ = default;

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription* description) /*override*/;

    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
