#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

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
    MCAPI int getNetherScale() const;

    MCAPI ::Vec3 const& getOverworldSpawnPoint() const;
    // NOLINTEND
};
