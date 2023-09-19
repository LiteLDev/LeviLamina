#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerService {
public:
    // prevent constructor by default
    MultiplayerService& operator=(MultiplayerService const&);
    MultiplayerService(MultiplayerService const&);
    MultiplayerService();
};

}; // namespace Social
