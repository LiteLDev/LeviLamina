#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredError {
public:
    // prevent constructor by default
    RegisteredError& operator=(RegisteredError const&);
    RegisteredError(RegisteredError const&);
    RegisteredError();
};

}; // namespace Scripting::QuickJS
