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

class FractalDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk31ecd1;
    ::ll::UntypedStorage<4, 4> mUnk64214d;
    ::ll::UntypedStorage<4, 4> mUnk1ccf29;
    ::ll::UntypedStorage<4, 4> mUnkd23911;
    // NOLINTEND

public:
    // prevent constructor by default
    FractalDensityCalculator& operator=(FractalDensityCalculator const&);
    FractalDensityCalculator(FractalDensityCalculator const&);
    FractalDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FractalDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
