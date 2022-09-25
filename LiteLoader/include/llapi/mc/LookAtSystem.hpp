/**
 * @file  LookAtSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtSystem.
 *
 */
class LookAtSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATSYSTEM
public:
    class LookAtSystem& operator=(class LookAtSystem const &) = delete;
    LookAtSystem(class LookAtSystem const &) = delete;
    LookAtSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LookAtSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -1671447183
     * @vftbl  2
     * @symbol ?tick@LookAtSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @hash   531868351
     * @symbol ?tickLookAtComponent@LookAtSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VLookAtComponent@@@@@Z
     */
    MCAPI static void tickLookAtComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class LookAtComponent> &);

};