/**
 * @file  MC/ActorLegacyTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorLegacyTickSystem.
 *
 */
class ActorLegacyTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLEGACYTICKSYSTEM
public:
    class ActorLegacyTickSystem& operator=(class ActorLegacyTickSystem const &) = delete;
    ActorLegacyTickSystem(class ActorLegacyTickSystem const &) = delete;
    ActorLegacyTickSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorLegacyTickSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1137511658
     * @vftbl  2
     * @symbol ?tick@ActorLegacyTickSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @hash   1784429518
     * @symbol ?tickActorLegacyTickSystem@ActorLegacyTickSystem@@SAXAEAVEntityContext@@AEAVActor@@AEAVActorTickNeededComponent@@@Z
     */
    MCAPI static void tickActorLegacyTickSystem(class EntityContext &, class Actor &, class ActorTickNeededComponent &);

};