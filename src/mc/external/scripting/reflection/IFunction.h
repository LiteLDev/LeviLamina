#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {

class IFunction {
public:
    // prevent constructor by default
    IFunction& operator=(IFunction const&);
    IFunction(IFunction const&);
    IFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFunction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting::Reflection
