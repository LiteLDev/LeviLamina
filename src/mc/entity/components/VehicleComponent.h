#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLECOMPONENT
public:
    VehicleComponent& operator=(VehicleComponent const&) = delete;
    VehicleComponent()                                   = delete;
#endif

public:
    /**
     * @symbol ??0VehicleComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI VehicleComponent(struct VehicleComponent const&);
};
