#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerInteractComponent {
public:
    // prevent constructor by default
    ServerPlayerInteractComponent& operator=(ServerPlayerInteractComponent const&);
    ServerPlayerInteractComponent(ServerPlayerInteractComponent const&);
    ServerPlayerInteractComponent();
};
