/**
 * @file  BalloonableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BalloonableComponent.
 *
 */
class BalloonableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONABLECOMPONENT
public:
    class BalloonableComponent& operator=(class BalloonableComponent const &) = delete;
    BalloonableComponent(class BalloonableComponent const &) = delete;
    BalloonableComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getInteraction\@BalloonableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

//private:
    /**
     * @symbol  ?attach\@BalloonableComponent\@\@AEAA_NAEAVActor\@\@0AEAVItemStack\@\@\@Z
     */
    MCAPI bool attach(class Actor &, class Actor &, class ItemStack &);

private:

};