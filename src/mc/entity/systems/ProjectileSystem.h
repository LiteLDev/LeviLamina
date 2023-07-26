#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProjectileSystem {

public:
    // prevent constructor by default
    ProjectileSystem& operator=(ProjectileSystem const&) = delete;
    ProjectileSystem(ProjectileSystem const&)            = delete;
    ProjectileSystem()                                   = delete;

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
     * @symbol ?tick\@ProjectileSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?_tickProjectileComponent\@ProjectileSystem\@\@SAXPEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    MCAPI static void _tickProjectileComponent(class Actor*, class ProjectileComponent&); // NOLINT
};
