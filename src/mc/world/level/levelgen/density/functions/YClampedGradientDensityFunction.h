#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class YClampedGradientDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb4408;
    ::ll::UntypedStorage<4, 4> mUnk18b339;
    ::ll::UntypedStorage<4, 4> mUnk873a48;
    ::ll::UntypedStorage<4, 4> mUnk8bd3c2;
    // NOLINTEND

public:
    // prevent constructor by default
    YClampedGradientDensityFunction& operator=(YClampedGradientDensityFunction const&);
    YClampedGradientDensityFunction(YClampedGradientDensityFunction const&);
    YClampedGradientDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YClampedGradientDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
