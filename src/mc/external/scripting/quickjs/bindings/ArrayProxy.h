#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ArrayProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfdfb0c;
    ::ll::UntypedStorage<8, 16> mUnkf51b23;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrayProxy& operator=(ArrayProxy const&);
    ArrayProxy(ArrayProxy const&);
    ArrayProxy();
};

} // namespace Scripting::QuickJS
