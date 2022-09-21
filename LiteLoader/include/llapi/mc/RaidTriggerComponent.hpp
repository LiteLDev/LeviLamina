/**
 * @file  MC/RaidTriggerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RaidTriggerComponent.
 *
 */
class RaidTriggerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERCOMPONENT
public:
    class RaidTriggerComponent& operator=(class RaidTriggerComponent const &) = delete;
    RaidTriggerComponent(class RaidTriggerComponent const &) = delete;
    RaidTriggerComponent() = delete;
#endif

public:
    /**
     * @hash   89634106
     * @symbol ?initFromDefinition@RaidTriggerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -2001713908
     * @symbol ?reloadComponent@RaidTriggerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void reloadComponent(class Actor &);

};