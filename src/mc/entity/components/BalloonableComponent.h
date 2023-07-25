#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONABLECOMPONENT
public:
    BalloonableComponent& operator=(BalloonableComponent const&) = delete;
    BalloonableComponent(BalloonableComponent const&)            = delete;
    BalloonableComponent()                                       = delete;
#endif

public:
    /**
     * @symbol ?getInteraction\@BalloonableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

    // private:
    /**
     * @symbol ?attach\@BalloonableComponent\@\@AEAA_NAEAVActor\@\@0AEAVItemStack\@\@\@Z
     */
    MCAPI bool attach(class Actor&, class Actor&, class ItemStack&);

private:
};
