#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerComponent {
public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);
    HeartbeatServerComponent(HeartbeatServerComponent const&);
    HeartbeatServerComponent();

public:
    // NOLINTBEGIN
    MCAPI HeartbeatServerComponent(class HeartbeatServerComponent&&);

    MCAPI ~HeartbeatServerComponent();

    // NOLINTEND
};
