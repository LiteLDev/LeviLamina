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

class ClampDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkb4d96e;
    ::ll::UntypedStorage<4, 4> mUnkb1e0fa;
    ::ll::UntypedStorage<4, 4> mUnk22693f;
    // NOLINTEND

public:
    // prevent constructor by default
    ClampDensityCalculator& operator=(ClampDensityCalculator const&);
    ClampDensityCalculator(ClampDensityCalculator const&);
    ClampDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClampDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
