#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ArrayProxy {
public:
    // prevent constructor by default
    ArrayProxy& operator=(ArrayProxy const&);
    ArrayProxy(ArrayProxy const&);
    ArrayProxy();
};

}; // namespace Scripting::QuickJS
