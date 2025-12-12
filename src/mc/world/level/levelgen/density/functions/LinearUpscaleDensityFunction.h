#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class LinearUpscaleDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7cdfaa;
    ::ll::UntypedStorage<2, 6>  mUnkf675bb;
    // NOLINTEND

public:
    // prevent constructor by default
    LinearUpscaleDensityFunction& operator=(LinearUpscaleDensityFunction const&);
    LinearUpscaleDensityFunction(LinearUpscaleDensityFunction const&);
    LinearUpscaleDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinearUpscaleDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
