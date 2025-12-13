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
    virtual ~LookControl() /*override*/ = default;

    virtual void initializeInternal(::Mob& mob);

    virtual void tick(::Mob& mob);
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
