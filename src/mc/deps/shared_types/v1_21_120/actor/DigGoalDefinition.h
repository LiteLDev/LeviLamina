#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct DigGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mDuration;
    ::ll::TypedStorage<4, 4, float>                                              mIdleTimeSeconds;
    ::ll::TypedStorage<1, 1, bool>                                               mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                                               mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                                               mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                                               mDigsInDaylight;
    ::ll::TypedStorage<8, 368, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    DigGoalDefinition& operator=(DigGoalDefinition const&);
    DigGoalDefinition(DigGoalDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DigGoalDefinition();

    MCAPI ::SharedTypes::v1_21_120::DigGoalDefinition& operator=(::SharedTypes::v1_21_120::DigGoalDefinition&&);

    MCAPI ~DigGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& DEFAULT_ALLOW_DIG_WHEN_NAMED();

    MCAPI static bool const& DEFAULT_DIGS_IN_DAYLIGHT();

    MCAPI static float const& DEFAULT_DURATION();

    MCAPI static float const& DEFAULT_IDLE_TIME();

    MCAPI static bool const& DEFAULT_SUSPICION_IS_DISTURBANCE();

    MCAPI static bool const& DEFAULT_VIBRATION_IS_DISTURBANCE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
