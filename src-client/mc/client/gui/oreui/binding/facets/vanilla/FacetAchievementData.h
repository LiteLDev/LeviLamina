#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/social/manual_achievement_tracking/TrackedSetting.h"
#include "mc/world/actor/player/persona/Rarity.h"

namespace OreUI {

struct FacetAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformIndependentId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mAchievementName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mDescription;
    ::ll::TypedStorage<4, 4, int>                                         mGamerScore;
    ::ll::TypedStorage<8, 8, int64>                                       mDateUnlocked;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                     mAchievementImageURL;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mIsSecret;
    ::ll::TypedStorage<4, 4, float>                                       mProgressCompleted;
    ::ll::TypedStorage<4, 4, float>                                       mProgressTarget;
    ::ll::TypedStorage<4, 4, ::ManualAchievementTracking::TrackedSetting> mTrackedByUser;
    ::ll::TypedStorage<4, 4, int>                                         mSuggestedOrder;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPersonaRewardId;
    ::ll::TypedStorage<1, 1, bool>                                        mHasPersonaReward;
    ::ll::TypedStorage<1, 1, bool>                                        mIsPersonaRewardOwned;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPersonaRewardName;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                     mPersonaRewardImageURL;
    ::ll::TypedStorage<1, 1, ::persona::Rarity>                           mPersonaRewardRarity;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetAchievementData& operator=(FacetAchievementData const&);
    FacetAchievementData(FacetAchievementData const&);
    FacetAchievementData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetAchievementData(::OreUI::FacetAchievementData&&);

    MCAPI ~FacetAchievementData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::FacetAchievementData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
