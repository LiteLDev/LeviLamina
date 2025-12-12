#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class HeightMapDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk69a837;
    ::ll::UntypedStorage<4, 4>  mUnkfe86a2;
    ::ll::UntypedStorage<4, 4>  mUnk70757b;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightMapDensityFunction& operator=(HeightMapDensityFunction const&);
    HeightMapDensityFunction(HeightMapDensityFunction const&);
    HeightMapDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HeightMapDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
