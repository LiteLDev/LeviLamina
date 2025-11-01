#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka739eb;
    ::ll::UntypedStorage<8, 24> mUnk104f00;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredInterface& operator=(RegisteredInterface const&);
    RegisteredInterface(RegisteredInterface const&);
    RegisteredInterface();

};

}
