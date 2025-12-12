#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/LookControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class AgentLookControl : public ::LookControl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob) /*override*/;

    // vIndex: 2
    virtual void tick(::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~AgentLookControl() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float& sBaseYMax();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeInternal(::Mob& mob);

    MCAPI void $tick(::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
