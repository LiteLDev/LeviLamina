#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ClassBinding {

public:
    // prevent constructor by default
    ClassBinding& operator=(ClassBinding const&) = delete;
    ClassBinding(ClassBinding const&)            = delete;
    ClassBinding()                               = delete;
};

}; // namespace Scripting
