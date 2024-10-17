#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class MajorVersionLimit {
public:
    // prevent constructor by default
    MajorVersionLimit& operator=(MajorVersionLimit const&);
    MajorVersionLimit(MajorVersionLimit const&);
    MajorVersionLimit();
};

}; // namespace Scripting
