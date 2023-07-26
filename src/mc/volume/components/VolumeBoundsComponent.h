#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeBoundsComponent {

public:
    // prevent constructor by default
    VolumeBoundsComponent& operator=(VolumeBoundsComponent const&) = delete;
    VolumeBoundsComponent(VolumeBoundsComponent const&)            = delete;
    VolumeBoundsComponent()                                        = delete;
};
