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
};

}; // namespace Scripting
