#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

class MeleeAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbe14ae;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackDefinition& operator=(MeleeAttackDefinition const&);
    MeleeAttackDefinition(MeleeAttackDefinition const&);
    MeleeAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeleeAttackDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
