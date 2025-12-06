#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateConfigThresholds.h"
#include "mc/entity/components/ReplayStateMode.h"

struct ReplayStateConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ReplayStateConfigThresholds> mSupportedThresholds;
    ::ll::TypedStorage<1, 1, ::ReplayStateMode>              mMode;
    ::ll::TypedStorage<1, 1, uchar>                          mMinCorrectionDelay;
    ::ll::TypedStorage<1, 1, uchar>                          mMaxCorrectionDelay;
    ::ll::TypedStorage<2, 2, ushort>                         mHistorySize;
    // NOLINTEND
};
