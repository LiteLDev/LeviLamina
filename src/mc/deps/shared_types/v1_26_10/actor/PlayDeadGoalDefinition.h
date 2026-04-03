#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct PlayDeadGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                   mDuration;
    ::ll::TypedStorage<4, 4, float>                                                   mRandomStartChance;
    ::ll::TypedStorage<4, 4, int>                                                     mForceUseBelowHealth;
    ::ll::TypedStorage<1, 1, bool>                                                    mApplyRegeneration;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                                 mActivationDamageRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>              mFilters;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayDeadGoalDefinition& operator=(PlayDeadGoalDefinition const&);
    PlayDeadGoalDefinition(PlayDeadGoalDefinition const&);
    PlayDeadGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayDeadGoalDefinition(::SharedTypes::v1_26_10::PlayDeadGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_10::PlayDeadGoalDefinition& operator=(::SharedTypes::v1_26_10::PlayDeadGoalDefinition&&);

    MCAPI ~PlayDeadGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_DURATION();

    MCAPI static float const& DEFAULT_RANDOM_START_CHANCE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_10::PlayDeadGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
