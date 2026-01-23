#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SplitScreenUpdatedEventData {
public:
    // SplitScreenUpdatedEventData inner types define
    enum class SplitScreenMode : int {
        Vertical   = 1,
        Horizontal = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mIsSplitScreenActive;
    ::ll::TypedStorage<4, 4, int>                                            mClientInstanceCount;
    ::ll::TypedStorage<4, 4, int>                                            mClientSubId;
    ::ll::TypedStorage<4, 4, uint>                                           mUserId;
    ::ll::TypedStorage<4, 4, ::SplitScreenUpdatedEventData::SplitScreenMode> mSplitscreenDirection;
    // NOLINTEND
};
