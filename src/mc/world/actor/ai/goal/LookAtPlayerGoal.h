#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtPlayerGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtPlayerGoal& operator=(LookAtPlayerGoal const&);
    LookAtPlayerGoal(LookAtPlayerGoal const&);
    LookAtPlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtPlayerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
