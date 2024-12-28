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
    // prevent constructor by default
    LegacyBodyControl& operator=(LegacyBodyControl const&);
    LegacyBodyControl(LegacyBodyControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void clientTick(::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~LegacyBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyBodyControl();
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
    MCAPI void $clientTick(::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
