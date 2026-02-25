#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct FacetAchievementData; }
// clang-format on

namespace OreUI {

struct FacetPlayerAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                           mAchievementsUnlocked;
    ::ll::TypedStorage<4, 4, int>                                           mMaxAchievements;
    ::ll::TypedStorage<4, 4, int>                                           mCurrGamerScore;
    ::ll::TypedStorage<4, 4, int>                                           mMaxGamerScore;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetAchievementData>> mAchievementData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reset();

    MCAPI ~FacetPlayerAchievementData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
