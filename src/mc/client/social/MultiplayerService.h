#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerService {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_MULTIPLAYERSERVICE
public:
    MultiplayerService& operator=(MultiplayerService const&) = delete;
    MultiplayerService(MultiplayerService const&)            = delete;
    MultiplayerService()                                     = delete;
#endif

public:
};

}; // namespace Social
