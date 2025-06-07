#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/ServerPlayerCurrentMovementComponent.h"
#include "mc/input/MoveInputState.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
#include "mc/server/ServerPlayer.h"
#include "mc/util/ServerMoveInputHandlerSystemUtils.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/Level.h"


namespace ll::event::inline player {

LL_STATIC_HOOK(
    PlayerJumpEventHook,
    HookPriority::Normal,
    &ServerMoveInputHandlerSystemUtils::_tickServerMoveInputHandler,
    void,
    StrictEntityContext&                                     strictEntityContext,
    MovementAbilitiesComponent const&                        abilitiesComponent,
    ServerPlayerCurrentMovementComponent const&              serverPlayerCurrentMovementComponent,
    ClientInputLockComponent&                                lockComponent,
    MoveInputComponent&                                      input,
    ActorDataFlagComponent&                                  actorDataFlag,
    ActorDataDirtyFlagsComponent&                            actorDataDirtyFlags,
    VanillaClientGameplayComponent&                          vanillaClientGameplayComponent,
    ::Optional<::SneakingComponent const>                    sneakingComponent,
    ::Optional<::WasInWaterFlagComponent const>              isInWater,
    OptionalGlobal<::PlayerMovementSettingsComponent const>& playerMovementSettingsComponent
) {
    origin(
        strictEntityContext,
        abilitiesComponent,
        serverPlayerCurrentMovementComponent,
        lockComponent,
        input,
        actorDataFlag,
        actorDataDirtyFlags,
        vanillaClientGameplayComponent,
        sneakingComponent,
        isInWater,
        playerMovementSettingsComponent
    );
    if (strictEntityContext.mEntity->isNull()) return;
    if (auto level = ll::service::getLevel(); level) {
        if (Actor* actor = Actor::tryGetFromEntity(strictEntityContext, *level->getEntityRegistry(), false); actor) {
            if (actor->isPlayer()) {
                auto& inputstate = *input.mInputState;
                auto& pkt        = *serverPlayerCurrentMovementComponent.mCurrentUpdate;
                if (pkt.mInputData.get()[(size_t)::PlayerAuthInputPacket::InputData::StartJumping]
                    && inputstate.mJumpDown && input.mJumping) {
                    EventBus::getInstance().publish(PlayerJumpEvent(static_cast<ServerPlayer&>(*actor)));
                }
            }
        }
    }
}


static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    memory::HookRegistrar<PlayerJumpEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
