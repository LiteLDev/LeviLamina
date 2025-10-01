#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
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
    // vIndex: 0
    virtual ~IDensityFunction() = default;

    // vIndex: 1
    virtual ushort addToCalculators(::DensityCalculators&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
