/**
 * @file  MC/SchedulerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SchedulerComponent.
 *
 */
class SchedulerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERCOMPONENT
public:
    class SchedulerComponent& operator=(class SchedulerComponent const &) = delete;
    SchedulerComponent(class SchedulerComponent const &) = delete;
    SchedulerComponent() = delete;
#endif

public:
    /**
     * @hash   1544822328
     * @symbol ?getCurrentEventIndex@SchedulerComponent@@QEBAHXZ
     */
    MCAPI int getCurrentEventIndex() const;
    /**
     * @hash   -1195696826
     * @symbol ?setCurrentEventIndex@SchedulerComponent@@QEAAXH@Z
     */
    MCAPI void setCurrentEventIndex(int);

};