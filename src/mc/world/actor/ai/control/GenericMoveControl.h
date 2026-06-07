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
    virtual ~GenericMoveControl() /*override*/ = default;

    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription const* description) /*override*/;

    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GenericMoveControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeInternal(::Mob& mob, ::MoveControlDescription const* description);

    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
