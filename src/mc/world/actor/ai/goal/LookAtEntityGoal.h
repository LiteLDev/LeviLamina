#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtEntityGoal : public ::LookAtActorGoal {
public:
    // prevent constructor by default
    LookAtEntityGoal& operator=(LookAtEntityGoal const&);
    LookAtEntityGoal(LookAtEntityGoal const&);
    LookAtEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtEntityGoal() /*override*/ = default;
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
