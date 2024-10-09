#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredClass {
public:
    // prevent constructor by default
    RegisteredClass& operator=(RegisteredClass const&);
    RegisteredClass(RegisteredClass const&);
    RegisteredClass();
};

}; // namespace Scripting::QuickJS
