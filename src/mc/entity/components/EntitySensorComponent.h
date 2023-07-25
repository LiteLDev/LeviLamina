#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORCOMPONENT
public:
    EntitySensorComponent& operator=(EntitySensorComponent const&) = delete;
    EntitySensorComponent(EntitySensorComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI EntitySensorComponent();
    /**
     * @symbol ??0EntitySensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySensorComponent(class EntitySensorComponent&&);
    /**
     * @symbol ?evaluateActor\@EntitySensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void evaluateActor(class Actor&);
    /**
     * @symbol ??4EntitySensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySensorComponent& operator=(class EntitySensorComponent&&);
    /**
     * @symbol ??1EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntitySensorComponent();

    // private:

private:
    /**
     * @symbol ?NO_MAX_COUNT\@EntitySensorComponent\@\@0HB
     */
    MCAPI static int const NO_MAX_COUNT;
};
