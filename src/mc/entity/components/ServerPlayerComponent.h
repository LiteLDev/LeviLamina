#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerComponent {
public:
    // prevent constructor by default
    ServerPlayerComponent& operator=(ServerPlayerComponent const&);
    ServerPlayerComponent(ServerPlayerComponent const&);
    ServerPlayerComponent();
};
