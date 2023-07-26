#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerServiceManager {

public:
    // prevent constructor by default
    MultiplayerServiceManager& operator=(MultiplayerServiceManager const&) = delete;
    MultiplayerServiceManager(MultiplayerServiceManager const&)            = delete;
    MultiplayerServiceManager()                                            = delete;
};

}; // namespace Social
