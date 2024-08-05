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
    MCAPI ArgumentBinding();

    MCAPI ArgumentBinding(struct Scripting::ArgumentBinding&&);

    MCAPI ~ArgumentBinding();

    // NOLINTEND
};

}; // namespace Scripting
