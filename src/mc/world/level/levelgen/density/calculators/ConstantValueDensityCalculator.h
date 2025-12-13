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

class ConstantValueDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8340ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantValueDensityCalculator& operator=(ConstantValueDensityCalculator const&);
    ConstantValueDensityCalculator(ConstantValueDensityCalculator const&);
    ConstantValueDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantValueDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
