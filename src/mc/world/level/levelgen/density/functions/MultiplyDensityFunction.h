#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class MultiplyDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk48e978;
    ::ll::UntypedStorage<8, 16> mUnke6ae99;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplyDensityFunction& operator=(MultiplyDensityFunction const&);
    MultiplyDensityFunction(MultiplyDensityFunction const&);
    MultiplyDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplyDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
