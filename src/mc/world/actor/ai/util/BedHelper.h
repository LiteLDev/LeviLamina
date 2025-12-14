#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNorthDir;
    ::ll::TypedStorage<4, 4, float> mSouthDir;
    ::ll::TypedStorage<4, 4, float> mWestDir;
    ::ll::TypedStorage<4, 4, float> mEastDir;
    ::ll::TypedStorage<4, 4, float> mBedOffsetX;
    ::ll::TypedStorage<4, 4, float> mBedOffsetZ;
    ::ll::TypedStorage<4, 4, float> mMobOffsetWestX;
    ::ll::TypedStorage<4, 4, float> mMobOffsetEastX;
    ::ll::TypedStorage<4, 4, float> mMobOffsetSouthZ;
    ::ll::TypedStorage<4, 4, float> mMobOffsetNorthZ;
    // NOLINTEND
};
