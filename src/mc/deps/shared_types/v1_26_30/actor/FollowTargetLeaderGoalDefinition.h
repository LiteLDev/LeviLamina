#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_20/actor/MoveTowardsTargetGoalDefinition.h"

namespace SharedTypes::v1_26_30 {

struct FollowTargetLeaderGoalDefinition : public ::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mFollowDistance;
    ::ll::TypedStorage<1, 1, bool>                                       mAlwaysLookForLeader;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mLeaderFilters;
    ::ll::TypedStorage<4, 4, int>                                        mSearchCooldown;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
