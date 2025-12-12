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

class AddDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf90ca1;
    ::ll::UntypedStorage<2, 2> mUnk434fb6;
    // NOLINTEND

public:
    // prevent constructor by default
    AddDensityCalculator& operator=(AddDensityCalculator const&);
    AddDensityCalculator(AddDensityCalculator const&);
    AddDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
