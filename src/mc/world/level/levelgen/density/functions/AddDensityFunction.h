#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class AddDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaf70e4;
    ::ll::UntypedStorage<8, 16> mUnk966e33;
    // NOLINTEND

public:
    // prevent constructor by default
    AddDensityFunction& operator=(AddDensityFunction const&);
    AddDensityFunction(AddDensityFunction const&);
    AddDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
