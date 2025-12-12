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

class OffsetDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnke0bd67;
    ::ll::UntypedStorage<4, 4> mUnk5b73b3;
    // NOLINTEND

public:
    // prevent constructor by default
    OffsetDensityCalculator& operator=(OffsetDensityCalculator const&);
    OffsetDensityCalculator(OffsetDensityCalculator const&);
    OffsetDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OffsetDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
