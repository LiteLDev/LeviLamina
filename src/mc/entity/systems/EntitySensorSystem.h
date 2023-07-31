#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorSystem {

public:
    // prevent constructor by default
    EntitySensorSystem& operator=(EntitySensorSystem const&) = delete;
    EntitySensorSystem(EntitySensorSystem const&)            = delete;
    EntitySensorSystem()                                     = delete;

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
     * @symbol ?tick\@EntitySensorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
