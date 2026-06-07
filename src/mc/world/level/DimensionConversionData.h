#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class DimensionConversionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOverworldSpawnPoint;
    ::ll::TypedStorage<4, 4, int>     mNetherScale;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getNetherScale() const;

    MCNAPI ::Vec3 const& getOverworldSpawnPoint() const;
    // NOLINTEND
};
