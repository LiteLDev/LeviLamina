/**
 * @file  ProjectileSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProjectileSystem.
 *
 */
class ProjectileSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILESYSTEM
public:
    class ProjectileSystem& operator=(class ProjectileSystem const &) = delete;
    ProjectileSystem(class ProjectileSystem const &) = delete;
    ProjectileSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ProjectileSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@ProjectileSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?_tickProjectileComponent\@ProjectileSystem\@\@SAXPEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    MCAPI static void _tickProjectileComponent(class Actor *, class ProjectileComponent &);

};