#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

struct ThrowableItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mDoSwing;
    ::ll::TypedStorage<4, 4, float> mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float> mDrawDuration;
    ::ll::TypedStorage<4, 4, float> mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float> mMaxLaunchPower;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
