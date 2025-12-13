#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AchievementOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk590584;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementOfferInfo& operator=(AchievementOfferInfo const&);
    AchievementOfferInfo(AchievementOfferInfo const&);
    AchievementOfferInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AchievementOfferInfo() = default;
    // NOLINTEND
};
