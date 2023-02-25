/**
 * @file  EntitySensorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntitySensorComponent.
 *
 */
class EntitySensorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORCOMPONENT
public:
    class EntitySensorComponent& operator=(class EntitySensorComponent const &) = delete;
    EntitySensorComponent(class EntitySensorComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI EntitySensorComponent();
    /**
     * @symbol  ??0EntitySensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySensorComponent(class EntitySensorComponent &&);
    /**
     * @symbol  ?evaluateActor\@EntitySensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void evaluateActor(class Actor &);
    /**
     * @symbol  ??4EntitySensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySensorComponent & operator=(class EntitySensorComponent &&);
    /**
     * @symbol  ??1EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntitySensorComponent();

//private:

private:
    /**
     * @symbol  ?NO_MAX_COUNT\@EntitySensorComponent\@\@0HB
     */
    MCAPI static int const NO_MAX_COUNT;

};