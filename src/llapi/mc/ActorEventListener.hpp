/**
 * @file  ActorEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?onActorAttackedActor\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorAttackedActor(class Actor &, class Actor &);
    /**
     * @symbol  ?onActorCreated\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorCreated(class Actor &);
    /**
     * @symbol  ?onActorDeath\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBVActorDamageSource\@\@W4ActorType\@\@\@Z
     */
    MCVAPI enum class EventResult onActorDeath(class Actor &, class ActorDamageSource const &, enum class ActorType);
    /**
     * @symbol  ?onActorDefinitionEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@5\@\@Z
     */
    MCVAPI enum class EventResult onActorDefinitionEvent(class Actor &, std::string const &, std::vector<struct ActorDefinitionModifier> &);
    /**
     * @symbol  ?onActorMobInteraction\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4InteractionType\@MinecraftEventing\@\@W4ActorType\@\@\@Z
     */
    MCVAPI enum class EventResult onActorMobInteraction(class Actor &, enum class MinecraftEventing::InteractionType, enum class ActorType);
    /**
     * @symbol  ?onActorMove\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI enum class EventResult onActorMove(class Actor &, class Vec3 const &);
    /**
     * @symbol  ?onActorPredictedMove\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI enum class EventResult onActorPredictedMove(class Actor &, enum class MovePredictionType, class Vec3 const &);
    /**
     * @symbol  ?onActorSneakChanged\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N\@Z
     */
    MCVAPI enum class EventResult onActorSneakChanged(class Actor &, bool);
    /**
     * @symbol  ?onActorStartRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorStartRiding(class Actor &, class Actor &);
    /**
     * @symbol  ?onActorStopRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onActorStopRiding(class Actor &, bool, bool, bool);
    /**
     * @symbol  ?onActorTargetAcquired\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorTargetAcquired(class Actor &, class Actor &);
    /**
     * @symbol  ?onActorTeleported\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTeleported(class Actor &);
    /**
     * @symbol  ?onActorTick\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTick(class Actor &);
    /**
     * @symbol  ?onActorUseItemOn\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBVItemStack\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI enum class EventResult onActorUseItemOn(class Actor &, class ItemStack const &, class BlockPos const &, unsigned char);
    /**
     * @symbol  ?onEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ActorNotificationEvent const &);
#endif

};