#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct GlobalBinding {
public:
    // prevent constructor by default
    GlobalBinding& operator=(GlobalBinding const&);
    GlobalBinding(GlobalBinding const&);
    GlobalBinding();

public:
    // NOLINTBEGIN
    MCAPI ~GlobalBinding();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
