#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn {

struct NullToken {
public:
    // prevent constructor by default
    NullToken& operator=(NullToken const&);
    NullToken(NullToken const&);
    NullToken();
};

} // namespace br::spawn
