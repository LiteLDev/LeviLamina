#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class MapFromUnitToDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaef6bb;
    ::ll::UntypedStorage<4, 4>  mUnk886cc2;
    ::ll::UntypedStorage<4, 4>  mUnk5df474;
    // NOLINTEND

public:
    // prevent constructor by default
    MapFromUnitToDensityFunction& operator=(MapFromUnitToDensityFunction const&);
    MapFromUnitToDensityFunction(MapFromUnitToDensityFunction const&);
    MapFromUnitToDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapFromUnitToDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
