/**
 * @file  MC/ActorEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorEventListener.
 *
 */
class ActorEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTLISTENER
public:
    class ActorEventListener& operator=(class ActorEventListener const &) = delete;
    ActorEventListener(class ActorEventListener const &) = delete;
    ActorEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTLISTENER
    /**
     * @hash   -997556657
     * @symbol ?onActorAttackedActor@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
     */
    MCVAPI enum EventResult onActorAttackedActor(class Actor &, class Actor &);
    /**
     * @hash   -670260274
     * @symbol ?onActorCreated@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
     */
    MCVAPI enum EventResult onActorCreated(class Actor &);
    /**
     * @hash   -1328959021
     * @symbol ?onActorDeath@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVActorDamageSource@@W4ActorType@@@Z
     */
    MCVAPI enum EventResult onActorDeath(class Actor &, class ActorDamageSource const &, enum ActorType);
    /**
     * @hash   -685986579
     * @symbol ?onActorDefinitionEvent@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@5@@Z
     */
    MCVAPI enum EventResult onActorDefinitionEvent(class Actor &, std::string const &, std::vector<struct ActorDefinitionModifier> &);
    /**
     * @hash   -1507425506
     * @symbol ?onActorMobInteraction@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4InteractionType@MinecraftEventing@@W4ActorType@@@Z
     */
    MCVAPI enum EventResult onActorMobInteraction(class Actor &, enum MinecraftEventing::InteractionType, enum ActorType);
    /**
     * @hash   1619493673
     * @symbol ?onActorMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVVec3@@@Z
     */
    MCVAPI enum EventResult onActorMove(class Actor &, class Vec3 const &);
    /**
     * @hash   111650805
     * @symbol ?onActorPredictedMove@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@W4MovePredictionType@@AEBVVec3@@@Z
     */
    MCVAPI enum EventResult onActorPredictedMove(class Actor &, enum MovePredictionType, class Vec3 const &);
    /**
     * @hash   1785239538
     * @symbol ?onActorSneakChanged@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N@Z
     */
    MCVAPI enum EventResult onActorSneakChanged(class Actor &, bool);
    /**
     * @hash   -1169479528
     * @symbol ?onActorStartRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
     */
    MCVAPI enum EventResult onActorStartRiding(class Actor &, class Actor &);
    /**
     * @hash   -570018071
     * @symbol ?onActorStopRiding@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@_N11@Z
     */
    MCVAPI enum EventResult onActorStopRiding(class Actor &, bool, bool, bool);
    /**
     * @hash   -225561908
     * @symbol ?onActorTargetAcquired@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@0@Z
     */
    MCVAPI enum EventResult onActorTargetAcquired(class Actor &, class Actor &);
    /**
     * @hash   -1565318080
     * @symbol ?onActorTeleported@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
     */
    MCVAPI enum EventResult onActorTeleported(class Actor &);
    /**
     * @hash   -1902324563
     * @symbol ?onActorTick@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@@Z
     */
    MCVAPI enum EventResult onActorTick(class Actor &);
    /**
     * @hash   1506814570
     * @symbol ?onActorUseItemOn@ActorEventListener@@UEAA?AW4EventResult@@AEAVActor@@AEBVItemStack@@AEBVBlockPos@@E@Z
     */
    MCVAPI enum EventResult onActorUseItemOn(class Actor &, class ItemStack const &, class BlockPos const &, unsigned char);
    /**
     * @hash   72522530
     * @symbol ?onEvent@ActorEventListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct ActorNotificationEvent const &);
#endif

};