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
    ::ll::UntypedStorage<2, 2> mUnk5879d9;
    ::ll::UntypedStorage<4, 4> mUnk5bbc68;
    ::ll::UntypedStorage<4, 4> mUnkcb2d48;
    ::ll::UntypedStorage<2, 2> mUnk740755;
    ::ll::UntypedStorage<2, 2> mUnk147b47;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedChoiceDensityCalculator& operator=(RangedChoiceDensityCalculator const&);
    RangedChoiceDensityCalculator(RangedChoiceDensityCalculator const&);
    RangedChoiceDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RangedChoiceDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
