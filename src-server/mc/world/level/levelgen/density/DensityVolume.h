#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
// clang-format on

class DensityVolume {
public:
    // DensityVolume inner types declare
    // clang-format off
    struct Dimensions;
    // clang-format on

    // DensityVolume inner types define
    struct Dimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mX;
        ::ll::TypedStorage<2, 2, ushort> mY;
        ::ll::TypedStorage<2, 2, ushort> mZ;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Pos const>                      mMin;
    ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions const> mDimensions;
    ::ll::TypedStorage<8, 16, ::gsl::span<float>>               mValues;
    ::ll::TypedStorage<8, 8, ::DensityAllocator*>               mAllocator;
    // NOLINTEND
};
