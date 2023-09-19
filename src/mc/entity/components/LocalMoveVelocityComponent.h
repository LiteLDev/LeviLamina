#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalMoveVelocityComponent {
public:
    // prevent constructor by default
    LocalMoveVelocityComponent& operator=(LocalMoveVelocityComponent const&);
    LocalMoveVelocityComponent(LocalMoveVelocityComponent const&);
    LocalMoveVelocityComponent();
};
