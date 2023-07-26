#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

class ActorEventListener {

public:
    // prevent constructor by default
    ActorEventListener& operator=(ActorEventListener const&) = delete;
    ActorEventListener(ActorEventListener const&)            = delete;
    ActorEventListener()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTLISTENER
    /**
     * @symbol ?onActorAttackedActor\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorAttackedActor(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?onActorCreated\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorCreated(class Actor&); // NOLINT
    /**
     * @symbol
     * ?onActorCreationAttemptFailed\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onActorCreationAttemptFailed(class Actor&, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?onActorDefinitionEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@5\@\@Z
     */
    MCVAPI enum class EventResult
    onActorDefinitionEvent(class Actor&, std::string const&, std::vector<struct ActorDefinitionModifier>&); // NOLINT
    /**
     * @symbol
     * ?onActorMobInteraction\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4InteractionType\@MinecraftEventing\@\@W4ActorType\@\@\@Z
     */
    MCVAPI enum class EventResult
    onActorMobInteraction(class Actor&, enum class MinecraftEventing::InteractionType, enum class ActorType); // NOLINT
    /**
     * @symbol
     * ?onActorPredictedMove\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@W4MovePredictionType\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI enum class EventResult
    onActorPredictedMove(class Actor&, enum class MovePredictionType, class Vec3 const&); // NOLINT
    /**
     * @symbol ?onActorSneakChanged\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N\@Z
     */
    MCVAPI enum class EventResult onActorSneakChanged(class Actor&, bool); // NOLINT
    /**
     * @symbol ?onActorStartRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorStartRiding(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?onActorStopRiding\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onActorStopRiding(class Actor&, bool, bool, bool); // NOLINT
    /**
     * @symbol ?onActorTargetAcquired\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@0\@Z
     */
    MCVAPI enum class EventResult onActorTargetAcquired(class Actor&, class Actor&); // NOLINT
    /**
     * @symbol ?onActorTeleported\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTeleported(class Actor&); // NOLINT
    /**
     * @symbol ?onActorTick\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onActorTick(class Actor&); // NOLINT
    /**
     * @symbol ?onEvent\@ActorEventListener\@\@UEAA?AW4EventResult\@\@AEBUActorNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ActorNotificationEvent const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventListener(); // NOLINT
#endif
};
