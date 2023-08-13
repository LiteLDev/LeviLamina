#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ProjectileSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    ProjectileSystem& operator=(ProjectileSystem const&) = delete;
    ProjectileSystem(ProjectileSystem const&)            = delete;
    ProjectileSystem()                                   = delete;

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
     * @symbol ?tick\@ProjectileSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol ?_tickProjectileComponent\@ProjectileSystem\@\@SAXPEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    MCAPI static void _tickProjectileComponent(class Actor*, class ProjectileComponent&);
    // NOLINTEND
};
