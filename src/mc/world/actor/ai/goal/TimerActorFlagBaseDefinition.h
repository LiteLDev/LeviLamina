#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TimerActorFlagBaseGoal;
// clang-format on

class TimerActorFlagBaseDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk76f887;
    ::ll::UntypedStorage<4, 8>   mUnkfe75c9;
    ::ll::UntypedStorage<8, 104> mUnk4ebed7;
    ::ll::UntypedStorage<8, 104> mUnk8570b2;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerActorFlagBaseDefinition& operator=(TimerActorFlagBaseDefinition const&);
    TimerActorFlagBaseDefinition(TimerActorFlagBaseDefinition const&);
    TimerActorFlagBaseDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimerActorFlagBaseDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::TimerActorFlagBaseGoal& goal) const;
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
