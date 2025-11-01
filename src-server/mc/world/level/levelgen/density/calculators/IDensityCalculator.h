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
    // vIndex: 0
    virtual ~IDensityCalculator() = default;

    // vIndex: 1
    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
