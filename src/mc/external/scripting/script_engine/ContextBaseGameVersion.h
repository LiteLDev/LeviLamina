#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextBaseGameVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdbed96;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextBaseGameVersion& operator=(ContextBaseGameVersion const&);
    ContextBaseGameVersion(ContextBaseGameVersion const&);
    ContextBaseGameVersion();
};

} // namespace Scripting
