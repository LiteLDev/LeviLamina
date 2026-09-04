#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7fd96a;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextId& operator=(ContextId const&);
    ContextId(ContextId const&);
    ContextId();
};

} // namespace Scripting
