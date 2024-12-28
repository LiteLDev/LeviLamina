#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredsAuthComplete {
public:
    // prevent constructor by default
    CredsAuthComplete& operator=(CredsAuthComplete const&);
    CredsAuthComplete(CredsAuthComplete const&);
    CredsAuthComplete();
};

} // namespace edu::auth
