#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProjectileSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILESYSTEM
public:
    ProjectileSystem& operator=(ProjectileSystem const&) = delete;
    ProjectileSystem(ProjectileSystem const&)            = delete;
    ProjectileSystem()                                   = delete;
#endif

public:
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
     * @symbol ?tick\@ProjectileSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?_tickProjectileComponent\@ProjectileSystem\@\@SAXPEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    MCAPI static void _tickProjectileComponent(class Actor*, class ProjectileComponent&);
};
