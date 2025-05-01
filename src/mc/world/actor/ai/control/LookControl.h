#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class LookControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookControl() /*override*/ = default;

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob);

    // vIndex: 2
    virtual void tick(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
