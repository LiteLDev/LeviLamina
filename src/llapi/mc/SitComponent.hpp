/**
 * @file  SitComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SitComponent.
 *
 */
class SitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITCOMPONENT
public:
    class SitComponent& operator=(class SitComponent const &) = delete;
    SitComponent(class SitComponent const &) = delete;
    SitComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getInteraction\@SitComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

};