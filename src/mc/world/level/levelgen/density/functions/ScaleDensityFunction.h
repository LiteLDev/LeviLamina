#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class ScaleDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6c9a00;
    ::ll::UntypedStorage<4, 4>  mUnkdb173b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScaleDensityFunction& operator=(ScaleDensityFunction const&);
    ScaleDensityFunction(ScaleDensityFunction const&);
    ScaleDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScaleDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
