#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ArrayProxyInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk712260;
    ::ll::UntypedStorage<1, 1> mUnkc4dce3;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrayProxyInformation& operator=(ArrayProxyInformation const&);
    ArrayProxyInformation(ArrayProxyInformation const&);
    ArrayProxyInformation();
};

} // namespace Scripting::QuickJS
