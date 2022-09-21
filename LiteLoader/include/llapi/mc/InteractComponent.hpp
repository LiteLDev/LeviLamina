/**
 * @file  MC/InteractComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InteractComponent.
 *
 */
class InteractComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTCOMPONENT
public:
    class InteractComponent& operator=(class InteractComponent const &) = delete;
    InteractComponent(class InteractComponent const &) = delete;
    InteractComponent() = delete;
#endif

public:
    /**
     * @hash   1093414209
     * @symbol ?getCooldownCounter@InteractComponent@@QEBAFXZ
     */
    MCAPI short getCooldownCounter() const;
    /**
     * @hash   495091841
     * @symbol ?getInteraction@InteractComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -30514337
     * @symbol ?setCooldownCounter@InteractComponent@@QEAAXF@Z
     */
    MCAPI void setCooldownCounter(short);

//private:
    /**
     * @hash   -1267620292
     * @symbol ?_runInteraction@InteractComponent@@AEAA_NAEAVActor@@AEBUInteraction@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool _runInteraction(class Actor &, struct Interaction const &, class Player &, class ActorInteraction &);

private:

};