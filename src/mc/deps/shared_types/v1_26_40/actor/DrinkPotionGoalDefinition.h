#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct DrinkPotionGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // DrinkPotionGoalDefinition inner types declare
    // clang-format off
    struct PotionData;
    // clang-format on

    // DrinkPotionGoalDefinition inner types define
    struct PotionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                        mId;
        ::ll::TypedStorage<4, 4, float>                                      mChance;
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeedModifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_40::DrinkPotionGoalDefinition::PotionData>> mPotions;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
