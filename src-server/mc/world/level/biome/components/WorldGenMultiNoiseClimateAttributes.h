#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class WorldGenMultiNoiseClimateAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mHumidity;
    ::ll::TypedStorage<4, 4, float> mAltitude;
    ::ll::TypedStorage<4, 4, float> mWeirdness;
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenMultiNoiseClimateAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
