#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredInterface {
public:
    // prevent constructor by default
    RegisteredInterface& operator=(RegisteredInterface const&);
    RegisteredInterface(RegisteredInterface const&);
    RegisteredInterface();
};

}; // namespace Scripting::QuickJS
