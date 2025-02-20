#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TargetGoal;
struct MobDescriptor;
// clang-format on

class TargetGoalDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke37f30;
    ::ll::UntypedStorage<1, 1>  mUnk7727a0;
    ::ll::UntypedStorage<1, 1>  mUnk6bfb00;
    ::ll::UntypedStorage<4, 4>  mUnk51c60d;
    ::ll::UntypedStorage<4, 4>  mUnk99351c;
    ::ll::UntypedStorage<4, 4>  mUnkc2c4aa;
    ::ll::UntypedStorage<8, 24> mUnkef0f5b;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetGoalDefinition& operator=(TargetGoalDefinition const&);
    TargetGoalDefinition(TargetGoalDefinition const&);
    TargetGoalDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TargetGoalDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& goal, ::TargetGoal& entity) const;
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
