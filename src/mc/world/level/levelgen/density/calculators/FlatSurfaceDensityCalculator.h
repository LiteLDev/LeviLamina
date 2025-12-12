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

class FlatSurfaceDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka90f4a;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatSurfaceDensityCalculator& operator=(FlatSurfaceDensityCalculator const&);
    FlatSurfaceDensityCalculator(FlatSurfaceDensityCalculator const&);
    FlatSurfaceDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlatSurfaceDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
