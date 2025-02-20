#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextCommandVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk74b79d;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextCommandVersion& operator=(ContextCommandVersion const&);
    ContextCommandVersion(ContextCommandVersion const&);
    ContextCommandVersion();
};

} // namespace Scripting
