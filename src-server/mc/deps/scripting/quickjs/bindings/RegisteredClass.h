#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RegisteredClass {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk323ac2;
    ::ll::UntypedStorage<4, 4> mUnk9fa8e5;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredClass& operator=(RegisteredClass const&);
    RegisteredClass(RegisteredClass const&);
    RegisteredClass();

};

}
