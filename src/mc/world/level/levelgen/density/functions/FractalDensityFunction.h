#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class FractalDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1e18fa;
    ::ll::UntypedStorage<4, 4>  mUnk7b8c64;
    ::ll::UntypedStorage<4, 4>  mUnk7c509f;
    ::ll::UntypedStorage<4, 4>  mUnk4639e8;
    // NOLINTEND

public:
    // prevent constructor by default
    FractalDensityFunction& operator=(FractalDensityFunction const&);
    FractalDensityFunction(FractalDensityFunction const&);
    FractalDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FractalDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
