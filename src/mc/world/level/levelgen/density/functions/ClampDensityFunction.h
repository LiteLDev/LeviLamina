#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class ClampDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk705656;
    ::ll::UntypedStorage<4, 4>  mUnk70deaa;
    ::ll::UntypedStorage<4, 4>  mUnkfde417;
    // NOLINTEND

public:
    // prevent constructor by default
    ClampDensityFunction& operator=(ClampDensityFunction const&);
    ClampDensityFunction(ClampDensityFunction const&);
    ClampDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClampDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
