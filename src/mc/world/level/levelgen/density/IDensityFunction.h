#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfeea6c;
    // NOLINTEND

public:
    // prevent constructor by default
    IDensityFunction& operator=(IDensityFunction const&);
    IDensityFunction(IDensityFunction const&);
    IDensityFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDensityFunction() = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
