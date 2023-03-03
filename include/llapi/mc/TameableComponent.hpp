/**
 * @file  TameableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0TameableComponent\@\@QEAA\@XZ
     */
    MCAPI TameableComponent();
    /**
     * @symbol  ?getInteraction\@TameableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?tame\@TameableComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void tame(class Actor &, class Player &);

//private:
    /**
     * @symbol  ?_attemptToTame\@TameableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool _attemptToTame(class Actor &, class Player &);
    /**
     * @symbol  ?_canTame\@TameableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool _canTame(class Actor &, class Player &);
    /**
     * @symbol  ?_becomeTame\@TameableComponent\@\@CAXAEAVActor\@\@\@Z
     */
    MCAPI static void _becomeTame(class Actor &);

private:

};