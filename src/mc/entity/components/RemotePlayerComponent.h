#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemotePlayerComponent {
public:
    // prevent constructor by default
    RemotePlayerComponent& operator=(RemotePlayerComponent const&);
    RemotePlayerComponent(RemotePlayerComponent const&);
    RemotePlayerComponent();
};
