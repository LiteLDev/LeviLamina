#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TameableComponent {

public:
    // prevent constructor by default
    TameableComponent& operator=(TameableComponent const&) = delete;
    TameableComponent(TameableComponent const&)            = delete;

public:
    /**
     * @symbol ??0TameableComponent\@\@QEAA\@XZ
     */
    MCAPI TameableComponent(); // NOLINT
    /**
     * @symbol ?getInteraction\@TameableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol ?tame\@TameableComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void tame(class Actor&, class Player&); // NOLINT

    // private:
    /**
     * @symbol ?_attemptToTame\@TameableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool _attemptToTame(class Actor&, class Player&); // NOLINT
    /**
     * @symbol ?_canTame\@TameableComponent\@\@AEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool _canTame(class Actor&, class Player&); // NOLINT
    /**
     * @symbol ?_becomeTame\@TameableComponent\@\@CAXAEAVActor\@\@\@Z
     */
    MCAPI static void _becomeTame(class Actor&); // NOLINT

private:
};
