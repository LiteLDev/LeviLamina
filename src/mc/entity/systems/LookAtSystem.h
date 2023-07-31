#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtSystem {

public:
    // prevent constructor by default
    LookAtSystem& operator=(LookAtSystem const&) = delete;
    LookAtSystem(LookAtSystem const&)            = delete;
    LookAtSystem()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@LookAtSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?tickLookAtComponent\@LookAtSystem\@\@SAXAEAVActorOwnerComponent\@\@AEAVLookAtComponent\@\@\@Z
     */
    MCAPI static void tickLookAtComponent(class ActorOwnerComponent&, class LookAtComponent&);
    // NOLINTEND
};
