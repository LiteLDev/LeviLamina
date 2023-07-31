#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleComponent {

public:
    // prevent constructor by default
    VehicleComponent& operator=(VehicleComponent const&) = delete;
    VehicleComponent()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0VehicleComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI VehicleComponent(struct VehicleComponent const&);
    // NOLINTEND
};
