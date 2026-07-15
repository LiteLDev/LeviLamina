#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

namespace SharedTypes::v1_26_30 {

struct FollowCaravanGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                    mEntityCount;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mEntityTypes;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
