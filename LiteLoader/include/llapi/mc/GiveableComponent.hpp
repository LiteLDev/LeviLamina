/**
 * @file  MC/GiveableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GiveableComponent.
 *
 */
class GiveableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLECOMPONENT
public:
    class GiveableComponent& operator=(class GiveableComponent const &) = delete;
    GiveableComponent(class GiveableComponent const &) = delete;
    GiveableComponent() = delete;
#endif

public:
    /**
     * @hash   1173332983
     * @symbol ?getInteraction@GiveableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   1905849582
     * @symbol ??1GiveableComponent@@QEAA@XZ
     */
    MCAPI ~GiveableComponent();

};