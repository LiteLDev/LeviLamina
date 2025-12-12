#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class LinearTransformDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7cac30;
    ::ll::UntypedStorage<4, 4>  mUnkc058fd;
    ::ll::UntypedStorage<4, 4>  mUnk96c837;
    // NOLINTEND

public:
    // prevent constructor by default
    LinearTransformDensityFunction& operator=(LinearTransformDensityFunction const&);
    LinearTransformDensityFunction(LinearTransformDensityFunction const&);
    LinearTransformDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinearTransformDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
