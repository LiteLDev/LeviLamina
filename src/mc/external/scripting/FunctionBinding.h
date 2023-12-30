#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct FunctionBinding {
public:
    // prevent constructor by default
    FunctionBinding& operator=(FunctionBinding const&);
    FunctionBinding();

public:
    // NOLINTBEGIN
    // symbol: ??0FunctionBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI FunctionBinding(struct Scripting::FunctionBinding&&);

    // symbol: ??0FunctionBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI FunctionBinding(struct Scripting::FunctionBinding const&);

    // symbol: ??1FunctionBinding@Scripting@@QEAA@XZ
    MCAPI ~FunctionBinding();

    // NOLINTEND
};

}; // namespace Scripting
