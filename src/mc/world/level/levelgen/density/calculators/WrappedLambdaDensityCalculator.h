#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
class Pos;
// clang-format on

class WrappedLambdaDensityCalculator : public ::IDensityCalculator {
public:
    // WrappedLambdaDensityCalculator inner types define
    using LambdaDensityFuncAccessor = ::std::function<float(::Pos, ::std::vector<float> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float(::Pos, ::std::vector<float> const&)> const> mAccessorFunc;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort> const>                                      mInputCalculatorIndices;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WrappedLambdaDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
