#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

class MeleeBoxAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8562e8;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeBoxAttackDefinition& operator=(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeBoxAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
