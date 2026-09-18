#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_50 {

struct FollowMobGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mSpeedMultiplier;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                     mStopDistance;
    ::ll::TypedStorage<4, 4, int>                                        mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                                       mUseHomePositionRestriction;
    ::ll::TypedStorage<8, 32, ::std::string>                             mPreferredActorType;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<1, 1, bool>                                       mAbortNavigationOnStop;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
