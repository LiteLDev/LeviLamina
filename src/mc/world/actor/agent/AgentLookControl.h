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
    virtual void initializeInternal(::Mob& mob) /*override*/;

    virtual void tick(::Mob& mob) /*override*/;

    virtual ~AgentLookControl() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float& sBaseYMax();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob);

    MCNAPI void $tick(::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
