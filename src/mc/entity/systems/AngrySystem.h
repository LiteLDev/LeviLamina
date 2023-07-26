#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AngrySystem {

public:
    // prevent constructor by default
    AngrySystem& operator=(AngrySystem const&) = delete;
    AngrySystem(AngrySystem const&)            = delete;
    AngrySystem()                              = delete;

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
     * @symbol ?tick\@AngrySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@AngrySystem\@\@CAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext&, class AngryComponent&); // NOLINT

private:
};
