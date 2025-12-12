#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class LerpDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4c559b;
    ::ll::UntypedStorage<8, 16> mUnkd613d6;
    ::ll::UntypedStorage<4, 4>  mUnk6f52cf;
    // NOLINTEND

public:
    // prevent constructor by default
    LerpDensityFunction& operator=(LerpDensityFunction const&);
    LerpDensityFunction(LerpDensityFunction const&);
    LerpDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LerpDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
