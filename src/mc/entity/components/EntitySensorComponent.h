#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorComponent {

public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&) = delete;
    EntitySensorComponent(EntitySensorComponent const&)            = delete;

public:
    /**
     * @symbol ??0EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI EntitySensorComponent(); // NOLINT
    /**
     * @symbol ??0EntitySensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySensorComponent(class EntitySensorComponent&&); // NOLINT
    /**
     * @symbol ?evaluateActor\@EntitySensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void evaluateActor(class Actor&); // NOLINT
    /**
     * @symbol ??4EntitySensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySensorComponent& operator=(class EntitySensorComponent&&); // NOLINT
    /**
     * @symbol ??1EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntitySensorComponent(); // NOLINT

    // private:

private:
    /**
     * @symbol ?NO_MAX_COUNT\@EntitySensorComponent\@\@0HB
     */
    MCAPI static int const NO_MAX_COUNT; // NOLINT
};
