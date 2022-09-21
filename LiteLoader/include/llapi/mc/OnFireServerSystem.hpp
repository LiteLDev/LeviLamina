/**
 * @file  MC/OnFireServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFireServerSystem.
 *
 */
class OnFireServerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESERVERSYSTEM
public:
    class OnFireServerSystem& operator=(class OnFireServerSystem const &) = delete;
    OnFireServerSystem(class OnFireServerSystem const &) = delete;
    OnFireServerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnFireServerSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1711149863
     * @vftbl  2
     * @symbol ?tick@OnFireServerSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   -1173568506
     * @symbol ?_tickServer@OnFireServerSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VOnFireComponent@@@@@Z
     */
    MCAPI static void _tickServer(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class OnFireComponent> &);

private:

};