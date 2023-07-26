#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerService {

public:
    // prevent constructor by default
    MultiplayerService& operator=(MultiplayerService const&) = delete;
    MultiplayerService(MultiplayerService const&)            = delete;
    MultiplayerService()                                     = delete;
};

}; // namespace Social
