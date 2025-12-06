#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TimerActorFlagBaseGoal;
// clang-format on

class TimerActorFlagBaseDefinition : public ::BaseGoalDefinition {
public:
    // TimerActorFlagBaseDefinition inner types define
    using self = ::TimerActorFlagBaseDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::FloatRange>               mDurationRangeSeconds;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mCooldownRangeSeconds;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnEndEvent;
    // NOLINTEND

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
