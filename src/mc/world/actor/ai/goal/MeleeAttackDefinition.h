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
    // vIndex: 0
    virtual ~MeleeAttackDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
