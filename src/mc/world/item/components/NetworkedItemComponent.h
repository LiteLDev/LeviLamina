#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class NetworkedItemComponent {
public:
    // prevent constructor by default
    NetworkedItemComponent& operator=(NetworkedItemComponent const&);
    NetworkedItemComponent(NetworkedItemComponent const&);
    NetworkedItemComponent();
};
