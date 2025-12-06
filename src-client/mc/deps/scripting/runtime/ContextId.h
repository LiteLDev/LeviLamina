#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {
public:
    // ContextId inner types define
    using ContextIdValueType = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> value;
    // NOLINTEND
};

} // namespace Scripting
