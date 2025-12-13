#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class OffsetDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8ae795;
    ::ll::UntypedStorage<4, 4>  mUnk4b1838;
    // NOLINTEND

public:
    // prevent constructor by default
    OffsetDensityFunction& operator=(OffsetDensityFunction const&);
    OffsetDensityFunction(OffsetDensityFunction const&);
    OffsetDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OffsetDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
