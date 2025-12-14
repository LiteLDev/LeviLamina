#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"
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
    ::ll::TypedStorage<8, 16, ::DensityFunctionPtr const> mInput;
    ::ll::TypedStorage<4, 4, float const>                 mToMin;
    ::ll::TypedStorage<4, 4, float const>                 mToMax;
    // NOLINTEND

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
