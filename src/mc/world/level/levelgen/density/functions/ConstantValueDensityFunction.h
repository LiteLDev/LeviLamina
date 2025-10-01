#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
// clang-format on

class ConstantValueDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkec2323;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantValueDensityFunction& operator=(ConstantValueDensityFunction const&);
    ConstantValueDensityFunction(ConstantValueDensityFunction const&);
    ConstantValueDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConstantValueDensityFunction() /*override*/ = default;

    // vIndex: 1
    virtual ushort addToCalculators(::DensityCalculators&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
