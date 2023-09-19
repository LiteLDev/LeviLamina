#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ClassBinding {
public:
    // prevent constructor by default
    ClassBinding& operator=(ClassBinding const&);
    ClassBinding(ClassBinding const&);
    ClassBinding();
};

}; // namespace Scripting
