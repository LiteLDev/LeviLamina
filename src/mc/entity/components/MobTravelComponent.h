#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobTravelComponent {
public:
    // prevent constructor by default
    MobTravelComponent& operator=(MobTravelComponent const&);
    MobTravelComponent(MobTravelComponent const&);
    MobTravelComponent();
};
