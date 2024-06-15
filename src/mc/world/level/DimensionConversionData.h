#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionConversionData {
public:
    // prevent constructor by default
    DimensionConversionData& operator=(DimensionConversionData const&);
    DimensionConversionData(DimensionConversionData const&);
    DimensionConversionData();

public:
    // NOLINTBEGIN
    // symbol: ?getNetherScale@DimensionConversionData@@QEBAHXZ
    MCAPI int getNetherScale() const;

    // symbol: ?getOverworldSpawnPoint@DimensionConversionData@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getOverworldSpawnPoint() const;

    // NOLINTEND
};
