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
    MCAPI int getNetherScale() const;

    MCAPI class Vec3 const& getOverworldSpawnPoint() const;

    // NOLINTEND
};
