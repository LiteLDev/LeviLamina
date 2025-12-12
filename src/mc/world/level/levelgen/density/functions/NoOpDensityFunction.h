#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class NoOpDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2fe3e3;
    // NOLINTEND

public:
    // prevent constructor by default
    NoOpDensityFunction& operator=(NoOpDensityFunction const&);
    NoOpDensityFunction(NoOpDensityFunction const&);
    NoOpDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoOpDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
