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
    // prevent constructor by default
    AgentLookControl& operator=(AgentLookControl const&);
    AgentLookControl(AgentLookControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob) /*override*/;

    // vIndex: 2
    virtual void tick(::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~AgentLookControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AgentLookControl();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float& sBaseYMax();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
