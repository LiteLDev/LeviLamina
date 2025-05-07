#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class ChargeHeldItemDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3e9be9;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeHeldItemDefinition& operator=(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition(ChargeHeldItemDefinition const&);
    ChargeHeldItemDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChargeHeldItemDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
