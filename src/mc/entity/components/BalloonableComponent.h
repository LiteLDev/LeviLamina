#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BalloonableComponent {

public:
    // prevent constructor by default
    BalloonableComponent& operator=(BalloonableComponent const&) = delete;
    BalloonableComponent(BalloonableComponent const&)            = delete;
    BalloonableComponent()                                       = delete;

public:
    /**
     * @symbol ?getInteraction\@BalloonableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT

    // private:
    /**
     * @symbol ?attach\@BalloonableComponent\@\@AEAA_NAEAVActor\@\@0AEAVItemStack\@\@\@Z
     */
    MCAPI bool attach(class Actor&, class Actor&, class ItemStack&); // NOLINT

private:
};
