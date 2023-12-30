#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct AnyAndJSValue {
public:
    // prevent constructor by default
    AnyAndJSValue& operator=(AnyAndJSValue const&);
    AnyAndJSValue(AnyAndJSValue const&);
    AnyAndJSValue();

public:
    // NOLINTBEGIN
    // symbol: ??1AnyAndJSValue@Scripting@@QEAA@XZ
    MCAPI ~AnyAndJSValue();

    // NOLINTEND
};

}; // namespace Scripting
