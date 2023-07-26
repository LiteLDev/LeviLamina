#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtSystem {

public:
    // prevent constructor by default
    LookAtSystem& operator=(LookAtSystem const&) = delete;
    LookAtSystem(LookAtSystem const&)            = delete;
    LookAtSystem()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@LookAtSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?tickLookAtComponent\@LookAtSystem\@\@SAXAEAVActorOwnerComponent\@\@AEAVLookAtComponent\@\@\@Z
     */
    MCAPI static void tickLookAtComponent(class ActorOwnerComponent&, class LookAtComponent&); // NOLINT
};
