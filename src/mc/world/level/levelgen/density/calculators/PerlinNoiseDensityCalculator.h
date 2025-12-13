#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class PerlinNoiseDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf6c918;
    ::ll::UntypedStorage<4, 12> mUnk2e6028;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoiseDensityCalculator& operator=(PerlinNoiseDensityCalculator const&);
    PerlinNoiseDensityCalculator(PerlinNoiseDensityCalculator const&);
    PerlinNoiseDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PerlinNoiseDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
