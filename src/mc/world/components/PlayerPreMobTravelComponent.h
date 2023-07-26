#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPreMobTravelComponent {

public:
    // prevent constructor by default
    PlayerPreMobTravelComponent& operator=(PlayerPreMobTravelComponent const&) = delete;
    PlayerPreMobTravelComponent(PlayerPreMobTravelComponent const&)            = delete;
    PlayerPreMobTravelComponent()                                              = delete;
};
