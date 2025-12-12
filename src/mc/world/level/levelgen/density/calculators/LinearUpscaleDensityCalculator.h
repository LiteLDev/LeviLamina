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

class LinearUpscaleDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk5d4cd4;
    ::ll::UntypedStorage<2, 6> mUnk36c4d2;
    // NOLINTEND

public:
    // prevent constructor by default
    LinearUpscaleDensityCalculator& operator=(LinearUpscaleDensityCalculator const&);
    LinearUpscaleDensityCalculator(LinearUpscaleDensityCalculator const&);
    LinearUpscaleDensityCalculator();

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
