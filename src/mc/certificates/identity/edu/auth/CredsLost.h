#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredsLost {
public:
    // prevent constructor by default
    CredsLost& operator=(CredsLost const&);
    CredsLost(CredsLost const&);
    CredsLost();
};

} // namespace edu::auth
