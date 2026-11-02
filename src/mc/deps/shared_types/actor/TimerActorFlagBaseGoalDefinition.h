#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct TimerActorFlagBaseGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mDurationRangeSeconds;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                          mCooldownRangeSeconds;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEndEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerActorFlagBaseGoalDefinition(TimerActorFlagBaseGoalDefinition const&);
    TimerActorFlagBaseGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TimerActorFlagBaseGoalDefinition(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);

    MCNAPI ::SharedTypes::TimerActorFlagBaseGoalDefinition&
    operator=(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);

    MCNAPI ::SharedTypes::TimerActorFlagBaseGoalDefinition&
    operator=(::SharedTypes::TimerActorFlagBaseGoalDefinition const&);

    MCNAPI ~TimerActorFlagBaseGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::TimerActorFlagBaseGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes
