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
    // vIndex: 0, symbol: ??1IFunction@Reflection@Scripting@@UEAA@XZ
    virtual ~IFunction();

    // NOLINTEND
};

}; // namespace Scripting::Reflection
