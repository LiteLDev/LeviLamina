#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractComponent {

public:
    // prevent constructor by default
    InteractComponent& operator=(InteractComponent const&) = delete;
    InteractComponent(InteractComponent const&)            = delete;
    InteractComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getCooldownCounter\@InteractComponent\@\@QEBAFXZ
     */
    MCAPI short getCooldownCounter() const;
    /**
     * @symbol ?getInteraction\@InteractComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol ?setCooldownCounter\@InteractComponent\@\@QEAAXF\@Z
     */
    MCAPI void setCooldownCounter(short);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_runInteraction\@InteractComponent\@\@AEAA_NAEAVActor\@\@AEBUInteraction\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool _runInteraction(class Actor&, struct Interaction const&, class Player&, class ActorInteraction&);
    /**
     * @symbol ?_tryEquipitem\@InteractComponent\@\@CAXAEAVActor\@\@AEAVPlayer\@\@AEAVItemStack\@\@AEBV4\@HAEA_N4\@Z
     */
    MCAPI static void
    _tryEquipitem(class Actor&, class Player&, class ItemStack&, class ItemStack const&, int, bool&, bool&);
    // NOLINTEND
};
