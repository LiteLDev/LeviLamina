/**
 * @file  TameableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TameableComponent.
 *
 */
class TameableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAMEABLECOMPONENT
public:
    class TameableComponent& operator=(class TameableComponent const &) = delete;
    TameableComponent(class TameableComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1824448262
     * @symbol ??0TameableComponent@@QEAA@XZ
     */
    MCAPI TameableComponent();
    /**
     * @hash   -1771590545
     * @symbol ?getInteraction@TameableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   1582714359
     * @symbol ?tame@TameableComponent@@QEAAXAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI void tame(class Actor &, class Player &);

//private:
    /**
     * @hash   -243711110
     * @symbol ?_attemptToTame@TameableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool _attemptToTame(class Actor &, class Player &);
    /**
     * @hash   2041641362
     * @symbol ?_canTame@TameableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool _canTame(class Actor &, class Player &);

private:

};