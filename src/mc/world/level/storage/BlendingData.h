#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/storage/BlendingBlockType.h"

class BlendingData {
public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
    BlendingData();

public:
    // NOLINTBEGIN
    MCAPI class ScalarOptional<uchar> getBiome(int cellX, int cellZ, int quartY) const;

    MCAPI ::BlendingBlockType getBlockType(int cellX, int cellZ, int cellY) const;

    MCAPI class ScalarOptional<float> getDensity(int cellX, int cellZ, int cellY) const;

    MCAPI class ScalarOptional<short> getHeight(int cellX, int cellZ) const;

    MCAPI bool hasBlendDataAt(int cellX, int cellZ) const;

    // NOLINTEND
};
