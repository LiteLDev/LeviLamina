#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorComponent {

public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&) = delete;
    EntitySensorComponent(EntitySensorComponent const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?NO_MAX_COUNT\@EntitySensorComponent\@\@0HB
     */
    MCAPI static int const NO_MAX_COUNT;
    // NOLINTEND
};
