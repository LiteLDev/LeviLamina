#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class LinearUpscaleDensityCalculator : public ::IDensityCalculator {
public:
    // LinearUpscaleDensityCalculator inner types declare
    // clang-format off
    struct SingleDimensionSettings;
    struct VolumeSettings;
    // clang-format on

    // LinearUpscaleDensityCalculator inner types define
    struct SingleDimensionSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    mPos;
        ::ll::TypedStorage<4, 4, int>    mStep;
        ::ll::TypedStorage<2, 2, ushort> mCount;
        // NOLINTEND
    };

    struct VolumeSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos const>                      mMin;
        ::ll::TypedStorage<4, 12, ::Pos const>                      mStep;
        ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions const> mDimensions;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                      mInput;
    ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions> mSampleResolution;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinearUpscaleDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
