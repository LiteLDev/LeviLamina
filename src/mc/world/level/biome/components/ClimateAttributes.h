#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class ClimateAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mDownfall;
    ::ll::TypedStorage<4, 4, float> mRedSporeDensity;
    ::ll::TypedStorage<4, 4, float> mBlueSporeDensity;
    ::ll::TypedStorage<4, 4, float> mAshDensity;
    ::ll::TypedStorage<4, 4, float> mWhiteAshDensity;
    ::ll::TypedStorage<4, 4, float> mSnowAccumulationMin;
    ::ll::TypedStorage<4, 4, float> mSnowAccumulationMax;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClimateAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
