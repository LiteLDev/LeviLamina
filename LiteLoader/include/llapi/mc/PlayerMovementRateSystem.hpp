/**
 * @file  PlayerMovementRateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerMovementRateSystem.
 *
 */
struct PlayerMovementRateSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTRATESYSTEM
public:
    struct PlayerMovementRateSystem& operator=(struct PlayerMovementRateSystem const &) = delete;
    PlayerMovementRateSystem(struct PlayerMovementRateSystem const &) = delete;
    PlayerMovementRateSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlayerMovementRateSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -929375169
     * @vftbl  2
     * @symbol ?tick@PlayerMovementRateSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

};