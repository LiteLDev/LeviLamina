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

class MultiplyDensityCalculator : public ::IDensityCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk1ef791;
    ::ll::UntypedStorage<2, 2> mUnk69456a;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplyDensityCalculator& operator=(MultiplyDensityCalculator const&);
    MultiplyDensityCalculator(MultiplyDensityCalculator const&);
    MultiplyDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplyDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
