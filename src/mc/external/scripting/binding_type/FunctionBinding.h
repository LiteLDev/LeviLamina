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
    MCAPI FunctionBinding(struct Scripting::FunctionBinding&&);

    MCAPI FunctionBinding(struct Scripting::FunctionBinding const&);

    MCAPI ~FunctionBinding();

    // NOLINTEND
};

}; // namespace Scripting
