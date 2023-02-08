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
     * @hash   -525172324
     * @symbol  ??0EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI EntitySensorComponent();
    /**
     * @hash   336819673
     * @symbol  ??0EntitySensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySensorComponent(class EntitySensorComponent &&);
    /**
     * @hash   -671266798
     * @symbol  ?evaluateActor\@EntitySensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void evaluateActor(class Actor &);
    /**
     * @hash   1372085028
     * @symbol  ??4EntitySensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySensorComponent & operator=(class EntitySensorComponent &&);
    /**
     * @hash   737070508
     * @symbol  ??1EntitySensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~EntitySensorComponent();

//private:

private:
    /**
     * @hash   -1187825486
     * @symbol  ?NO_MAX_COUNT\@EntitySensorComponent\@\@0HB
     */
    MCAPI static int const NO_MAX_COUNT;

};