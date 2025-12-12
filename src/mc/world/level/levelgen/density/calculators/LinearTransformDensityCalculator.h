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

class LinearTransformDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk67ecfb;
    ::ll::UntypedStorage<4, 4> mUnk5f7dfa;
    ::ll::UntypedStorage<4, 4> mUnk282278;
    // NOLINTEND

public:
    // prevent constructor by default
    LinearTransformDensityCalculator& operator=(LinearTransformDensityCalculator const&);
    LinearTransformDensityCalculator(LinearTransformDensityCalculator const&);
    LinearTransformDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinearTransformDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
