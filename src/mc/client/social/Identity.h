#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class Identity {
public:
    // prevent constructor by default
    Identity& operator=(Identity const&);
    Identity(Identity const&);
    Identity();
};

}; // namespace Social
