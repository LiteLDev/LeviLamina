#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredEnum {
public:
    // prevent constructor by default
    RegisteredEnum& operator=(RegisteredEnum const&);
    RegisteredEnum(RegisteredEnum const&);
    RegisteredEnum();
};

}; // namespace Scripting::QuickJS
