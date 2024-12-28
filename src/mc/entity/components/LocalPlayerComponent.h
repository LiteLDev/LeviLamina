#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalPlayerComponent {
public:
    // prevent constructor by default
    LocalPlayerComponent& operator=(LocalPlayerComponent const&);
    LocalPlayerComponent(LocalPlayerComponent const&);
    LocalPlayerComponent();
};
