#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnvironmentSensorSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTSENSORSYSTEM
public:
    EnvironmentSensorSystem& operator=(EnvironmentSensorSystem const&) = delete;
    EnvironmentSensorSystem(EnvironmentSensorSystem const&)            = delete;
    EnvironmentSensorSystem()                                          = delete;
#endif

public:
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
};
