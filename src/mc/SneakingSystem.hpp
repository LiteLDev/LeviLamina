/**
 * @file  SneakingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SneakingSystem.
 *
 */
class SneakingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKINGSYSTEM
public:
    class SneakingSystem& operator=(class SneakingSystem const &) = delete;
    SneakingSystem(class SneakingSystem const &) = delete;
    SneakingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SneakingSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?tick\@SneakingSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorTickedFlag>>, struct Read<class FlagComponent<struct PlayerComponentFlag>>, struct Write<struct SneakingComponent, class ActorOwnerComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?_tickSneakingSystem\@SneakingSystem\@\@SAXAEAVStrictEntityContext\@\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAUSneakingComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSneakingSystem(class StrictEntityContext &, class FlagComponent<struct PlayerComponentFlag> const &, struct SneakingComponent &, class ActorOwnerComponent &);

};