#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/deps/vanilla_components/WasOnGroundFlagComponent.h"
#include "mc/entity/systems/ServerPlayerMovementCorrectionSystem.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
#include "mc/server/ServerPlayer.h"
#include "mc/util/ServerMoveInputHandlerSystemUtils.h"
#include "mc/world/actor/Actor.h"


namespace ll::event::inline player {

    LL_STATIC_HOOK(
        PlayerJumpEventHook,
        HookPriority::Normal,
        &ServerPlayerMovementCorrectionSystem::_afterMovementSimulation,
        void,
        UserEntityIdentifierComponent const& userIdentifier,
        Actor&                               actor,
        PlayerAuthInputPacket const&         packet,
        ReplayStateComponent&                replay,
        ActorRotationComponent const*        actorRotation,
        ServerPlayerMovementComponent&       serverPlayerMovement,
        StateVectorComponent&                stateVector,
        BoatMovementComponent const*         boat
    ) {
        origin(userIdentifier, actor, packet, replay, actorRotation, serverPlayerMovement, stateVector, boat);
        if (packet.mInputData->test(static_cast<size_t>(PlayerAuthInputPacket::InputData::Jumping)) && actor.isPlayer()) {
            auto&      player  = static_cast<Player&>(actor);
            auto&      pos     = player.getPosition();
            auto&      posPrev = player.mBuiltInComponents->mStateVectorComponent->mPosPrev.get();
            auto const delta   = pos - posPrev;
            if (player.getEntityContext().hasComponent<WasOnGroundFlagComponent>() && !player.isOnGround()
                && delta.y > 0.0f) {
                EventBus::getInstance().publish(PlayerJumpEvent(player));
                }
        }
    }


static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    memory::HookRegistrar<PlayerJumpEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
