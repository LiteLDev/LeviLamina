#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct Content {
public:
    // prevent constructor by default
    Content& operator=(Content const&);
    Content(Content const&);
    Content();
};

} // namespace Realms
