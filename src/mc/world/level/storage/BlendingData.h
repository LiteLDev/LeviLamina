#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ScalarOptional.h"
#include "mc/world/level/block/utils/BlendingBlockType.h"

class BlendingData {
public:
    // prevent constructor by default
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
    BlendingData();

public:
    // NOLINTBEGIN
    // symbol: ?getBiome@BlendingData@@QEBA?AV?$ScalarOptional@E@@HHH@Z
    MCAPI class ScalarOptional<uchar> getBiome(int cellX, int cellZ, int) const;

    // symbol: ?getBlockType@BlendingData@@QEBA?AW4BlendingBlockType@@HHH@Z
    MCAPI ::BlendingBlockType getBlockType(int cellX, int cellZ, int cellY) const;

    // symbol: ?getDensity@BlendingData@@QEBA?AV?$ScalarOptional@M@@HHH@Z
    MCAPI class ScalarOptional<float> getDensity(int cellX, int cellZ, int cellY) const;

    // symbol: ?getHeight@BlendingData@@QEBA?AV?$ScalarOptional@F@@HH@Z
    MCAPI class ScalarOptional<short> getHeight(int cellX, int cellZ) const;

    // symbol: ?hasBlendDataAt@BlendingData@@QEBA_NHH@Z
    MCAPI bool hasBlendDataAt(int cellX, int cellZ) const;

    // NOLINTEND
};
