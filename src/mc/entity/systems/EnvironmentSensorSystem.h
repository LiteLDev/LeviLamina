#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnvironmentSensorSystem {

public:
    // prevent constructor by default
    EnvironmentSensorSystem& operator=(EnvironmentSensorSystem const&) = delete;
    EnvironmentSensorSystem(EnvironmentSensorSystem const&)            = delete;
    EnvironmentSensorSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@EnvironmentSensorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
