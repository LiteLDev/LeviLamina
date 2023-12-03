#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerServiceManager {
public:
    // prevent constructor by default
    MultiplayerServiceManager& operator=(MultiplayerServiceManager const&);
    MultiplayerServiceManager(MultiplayerServiceManager const&);
    MultiplayerServiceManager();
};

}; // namespace Social
