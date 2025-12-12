#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AwardAchievementPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke57736;
    // NOLINTEND

public:
    // prevent constructor by default
    AwardAchievementPacketPayload& operator=(AwardAchievementPacketPayload const&);
    AwardAchievementPacketPayload(AwardAchievementPacketPayload const&);
    AwardAchievementPacketPayload();
};
