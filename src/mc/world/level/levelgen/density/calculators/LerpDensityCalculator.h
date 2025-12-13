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

class LerpDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkd0e1ad;
    ::ll::UntypedStorage<2, 2> mUnkc95b1e;
    ::ll::UntypedStorage<4, 4> mUnk739bd0;
    // NOLINTEND

public:
    // prevent constructor by default
    LerpDensityCalculator& operator=(LerpDensityCalculator const&);
    LerpDensityCalculator(LerpDensityCalculator const&);
    LerpDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LerpDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
