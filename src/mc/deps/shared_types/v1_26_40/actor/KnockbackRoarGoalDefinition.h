#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::v1_26_40 {

struct KnockbackRoarGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mDuration;
    ::ll::TypedStorage<4, 4, float>                                              mAttackTime;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                                              mHeightCap;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, float>                                              mCooldownTime;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>         mKnockbackFilters;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>         mDamageFilters;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                                               mFilterEvaluateFix;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackRoarGoalDefinition& operator=(KnockbackRoarGoalDefinition const&);
    KnockbackRoarGoalDefinition(KnockbackRoarGoalDefinition const&);
    KnockbackRoarGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KnockbackRoarGoalDefinition(::SharedTypes::v1_26_40::KnockbackRoarGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_40::KnockbackRoarGoalDefinition&
    operator=(::SharedTypes::v1_26_40::KnockbackRoarGoalDefinition&&);

    MCAPI ~KnockbackRoarGoalDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& JSONUTIL_DROP_UNRECOGNIZED_FIELDS_VERSION();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_40::KnockbackRoarGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
