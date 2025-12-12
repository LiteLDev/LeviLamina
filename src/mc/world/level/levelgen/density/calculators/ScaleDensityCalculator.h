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

class ScaleDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkb9d5d8;
    ::ll::UntypedStorage<4, 4> mUnka81736;
    // NOLINTEND

public:
    // prevent constructor by default
    ScaleDensityCalculator& operator=(ScaleDensityCalculator const&);
    ScaleDensityCalculator(ScaleDensityCalculator const&);
    ScaleDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScaleDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
