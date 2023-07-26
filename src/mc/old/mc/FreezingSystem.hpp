/**
 * @file  FreezingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FreezingSystem.
 *
 */
class FreezingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZINGSYSTEM
public:
    class FreezingSystem& operator=(class FreezingSystem const &) = delete;
    FreezingSystem(class FreezingSystem const &) = delete;
    FreezingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FreezingSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@FreezingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?FREEZE_EFFECT_UUID\@FreezingSystem\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;
    /**
     * @symbol  ?VULNERABLE_MOB_FREEZE_DAMAGE\@FreezingSystem\@\@2HB
     */
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;

};