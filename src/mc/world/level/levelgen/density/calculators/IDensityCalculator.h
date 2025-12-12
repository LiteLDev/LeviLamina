#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class IDensityCalculator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDensityCalculator() = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
