#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcae6c0;
    ::ll::UntypedStorage<4, 4> mUnkf80800;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredError& operator=(RegisteredError const&);
    RegisteredError(RegisteredError const&);
    RegisteredError();
};

} // namespace Scripting::QuickJS
