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

class YClampedGradientDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk556253;
    ::ll::UntypedStorage<4, 4> mUnk5e7705;
    ::ll::UntypedStorage<4, 4> mUnk8bcb72;
    ::ll::UntypedStorage<4, 4> mUnk47f867;
    // NOLINTEND

public:
    // prevent constructor by default
    YClampedGradientDensityCalculator& operator=(YClampedGradientDensityCalculator const&);
    YClampedGradientDensityCalculator(YClampedGradientDensityCalculator const&);
    YClampedGradientDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YClampedGradientDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
