#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ArgumentBinding@Scripting@@QEAA@XZ
    MCAPI ArgumentBinding();

    // symbol: ??0ArgumentBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ArgumentBinding(struct Scripting::ArgumentBinding&&);

    // symbol: ??1ArgumentBinding@Scripting@@QEAA@XZ
    MCAPI ~ArgumentBinding();

    // NOLINTEND
};

}; // namespace Scripting
