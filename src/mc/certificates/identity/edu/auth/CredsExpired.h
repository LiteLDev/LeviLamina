#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct CredsExpired {
public:
    // prevent constructor by default
    CredsExpired& operator=(CredsExpired const&);
    CredsExpired(CredsExpired const&);
    CredsExpired();
};

} // namespace edu::auth
