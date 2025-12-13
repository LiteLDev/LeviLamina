#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class NormalNoiseDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnked4094;
    ::ll::UntypedStorage<4, 12> mUnk9d12e8;
    // NOLINTEND

public:
    // prevent constructor by default
    NormalNoiseDensityFunction& operator=(NormalNoiseDensityFunction const&);
    NormalNoiseDensityFunction(NormalNoiseDensityFunction const&);
    NormalNoiseDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NormalNoiseDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
