#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerActiveCameraComponent {
public:
    // prevent constructor by default
    ServerActiveCameraComponent& operator=(ServerActiveCameraComponent const&);
    ServerActiveCameraComponent(ServerActiveCameraComponent const&);
    ServerActiveCameraComponent();
};
