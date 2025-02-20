#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class MajorVersionLimit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk303bc1;
    // NOLINTEND

public:
    // prevent constructor by default
    MajorVersionLimit& operator=(MajorVersionLimit const&);
    MajorVersionLimit(MajorVersionLimit const&);
    MajorVersionLimit();
};

} // namespace Scripting
