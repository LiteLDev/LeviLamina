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

class HeightMapDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk1e8e42;
    ::ll::UntypedStorage<4, 4> mUnk7d71cf;
    ::ll::UntypedStorage<4, 4> mUnk58e9bc;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightMapDensityCalculator& operator=(HeightMapDensityCalculator const&);
    HeightMapDensityCalculator(HeightMapDensityCalculator const&);
    HeightMapDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HeightMapDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
