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

class NormalNoiseDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk7c3bbd;
    ::ll::UntypedStorage<4, 12> mUnk17f9b8;
    // NOLINTEND

public:
    // prevent constructor by default
    NormalNoiseDensityCalculator& operator=(NormalNoiseDensityCalculator const&);
    NormalNoiseDensityCalculator(NormalNoiseDensityCalculator const&);
    NormalNoiseDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NormalNoiseDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
