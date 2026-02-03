#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/BodyControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class AgentBodyControl : public ::BodyControl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clientTick(::Mob& mob) /*override*/;

    virtual ~AgentBodyControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clientTick(::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
