#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/BodyControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LegacyBodyControl : public ::BodyControl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void clientTick(::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~LegacyBodyControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clientTick(::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
