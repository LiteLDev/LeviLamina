/**
 * @file  RailActivatorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RailActivatorComponent.
 *
 */
class RailActivatorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORCOMPONENT
public:
    class RailActivatorComponent& operator=(class RailActivatorComponent const &) = delete;
    RailActivatorComponent(class RailActivatorComponent const &) = delete;
    RailActivatorComponent() = delete;
#endif

public:
    /**
     * @symbol  ?ejectAllPassengers\@RailActivatorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void ejectAllPassengers(class Actor &);

};