#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitiesInsideVolumeComponent {

public:
    // prevent constructor by default
    EntitiesInsideVolumeComponent& operator=(EntitiesInsideVolumeComponent const&) = delete;
    EntitiesInsideVolumeComponent(EntitiesInsideVolumeComponent const&)            = delete;
    EntitiesInsideVolumeComponent()                                                = delete;
};
