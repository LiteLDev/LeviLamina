/**
 * @file  TrustingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrustingComponent.
 *
 */
class TrustingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGCOMPONENT
public:
    class TrustingComponent& operator=(class TrustingComponent const &) = delete;
    TrustingComponent(class TrustingComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0TrustingComponent\@\@QEAA\@XZ
     */
    MCAPI TrustingComponent();
    /**
     * @symbol  ?getInteraction\@TrustingComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

//private:
    /**
     * @symbol  ?_becomeTrusting\@TrustingComponent\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _becomeTrusting(class Actor &);

private:

};