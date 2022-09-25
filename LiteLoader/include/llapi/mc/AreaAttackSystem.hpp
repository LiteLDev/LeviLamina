/**
 * @file  AreaAttackSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AreaAttackSystem.
 *
 */
class AreaAttackSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKSYSTEM
public:
    class AreaAttackSystem& operator=(class AreaAttackSystem const &) = delete;
    AreaAttackSystem(class AreaAttackSystem const &) = delete;
    AreaAttackSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AreaAttackSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -1387316172
     * @vftbl  2
     * @symbol ?tick@AreaAttackSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   1102483153
     * @symbol ?_tickComponent@AreaAttackSystem@@AEAAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VAreaAttackComponent@@@@@Z
     */
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class AreaAttackComponent> &);

private:

};