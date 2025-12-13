#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class FlatSurfaceDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk164fa5;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatSurfaceDensityFunction& operator=(FlatSurfaceDensityFunction const&);
    FlatSurfaceDensityFunction(FlatSurfaceDensityFunction const&);
    FlatSurfaceDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlatSurfaceDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
