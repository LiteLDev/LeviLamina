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

class RangedChoiceDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mChoiceInput;
    ::ll::TypedStorage<4, 4, float>  mMinInclusive;
    ::ll::TypedStorage<4, 4, float>  mMaxExclusive;
    ::ll::TypedStorage<2, 2, ushort> mInRangeInput;
    ::ll::TypedStorage<2, 2, ushort> mOutOfRangeInput;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedChoiceDensityCalculator() /*override*/ = default;

    // vIndex: 1
    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
