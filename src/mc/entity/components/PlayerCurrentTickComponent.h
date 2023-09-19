#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerCurrentTickComponent {
public:
    // prevent constructor by default
    PlayerCurrentTickComponent& operator=(PlayerCurrentTickComponent const&);
    PlayerCurrentTickComponent(PlayerCurrentTickComponent const&);
    PlayerCurrentTickComponent();
};
