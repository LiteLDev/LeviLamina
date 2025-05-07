#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

class DefendVillageTargetDefinition : public ::TargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk580179;
    // NOLINTEND

public:
    // prevent constructor by default
    DefendVillageTargetDefinition& operator=(DefendVillageTargetDefinition const&);
    DefendVillageTargetDefinition(DefendVillageTargetDefinition const&);
    DefendVillageTargetDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefendVillageTargetDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
