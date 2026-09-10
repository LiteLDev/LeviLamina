#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct NapGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMin;
    ::ll::TypedStorage<4, 4, float>                                      mCooldownMax;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectDist;
    ::ll::TypedStorage<4, 4, float>                                      mMobDetectHeight;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mCanNapFilters;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mWakeMobExceptions;
    // NOLINTEND

public:
    // prevent constructor by default
    NapGoalDefinition& operator=(NapGoalDefinition const&);
    NapGoalDefinition(NapGoalDefinition const&);
    NapGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NapGoalDefinition(::SharedTypes::v1_26_40::NapGoalDefinition&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_40::NapGoalDefinition&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
