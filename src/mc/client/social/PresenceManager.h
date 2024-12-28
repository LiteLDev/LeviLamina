#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class PresenceManager {
public:
    // prevent constructor by default
    PresenceManager& operator=(PresenceManager const&);
    PresenceManager(PresenceManager const&);
    PresenceManager();
};

} // namespace Social
