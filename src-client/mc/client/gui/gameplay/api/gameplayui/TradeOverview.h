#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct TradeOverview {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           isExperienceBarVisible;
    ::ll::TypedStorage<4, 4, float>          experienceProgress;
    ::ll::TypedStorage<4, 4, float>          experiencePossibleProgress;
    ::ll::TypedStorage<8, 32, ::std::string> traderName;
    ::ll::TypedStorage<4, 4, int>            tradeTiers;
    // NOLINTEND
};

} // namespace GameplayUI
