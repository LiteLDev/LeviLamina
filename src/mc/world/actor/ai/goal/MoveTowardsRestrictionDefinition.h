#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MoveTowardsRestrictionGoal;
// clang-format on

class MoveTowardsRestrictionDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc54d20;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsRestrictionDefinition& operator=(MoveTowardsRestrictionDefinition const&);
    MoveTowardsRestrictionDefinition(MoveTowardsRestrictionDefinition const&);
    MoveTowardsRestrictionDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveTowardsRestrictionDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext& entity, ::MoveTowardsRestrictionGoal& goal) const;
    // NOLINTEND
};
