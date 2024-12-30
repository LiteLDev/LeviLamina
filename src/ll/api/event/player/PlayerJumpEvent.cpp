#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/ServerAuthMovementMode.h"
#include "mc/entity/components/ServerPlayerCurrentMovementComponent.h"
#include "mc/input/MoveInputState.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerActionPacket.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
#include "mc/server/PropertiesSettings.h"
#include "mc/server/ServerPlayer.h"
#include "mc/util/ServerMoveInputHandlerSystemUtils.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/PlayerMovementSettings.h"
#include "mc/world/level/Level.h"


namespace ll::event::inline player {

// client-auth
LL_TYPE_INSTANCE_HOOK(
    PlayerJumpEventHook1,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&  source,
    PlayerActionPacket const& packet
) {
    if (auto settings = ll::service::getPropertiesSettings(); settings) {
        auto mode = settings->getPlayerMovementSettings().mUnk3c7e19.as<ServerAuthMovementMode>();
        if (mode == ServerAuthMovementMode::LegacyClientAuthoritativeV1) {
            if (packet.mAction == PlayerActionType::StartJump) {
                auto& handle = ll::memory::dAccess<ServerNetworkHandler>(this, -16);
                if (auto player = handle._getServerPlayer(source, packet.mClientSubId); player) {
                    EventBus::getInstance().publish(PlayerJumpEvent(*player));
                }
            }
        }
    }
    return origin(source, packet);
}

// server-auth
LL_STATIC_HOOK(
    PlayerJumpEventHook2,
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
    void*                                                    sneakingComponent,
    void*                                                    isInWater,
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
    if (strictEntityContext.isNull()) return;
    if (auto level = ll::service::getLevel(); level) {
        if (Actor* actor = Actor::tryGetFromEntity(strictEntityContext, *level->getEntityRegistry(), false); actor) {
            if (actor->isPlayer()) {
                auto& inputstate = input.mUnk705c07.as<MoveInputState>();
                auto& pkt        = serverPlayerCurrentMovementComponent.mUnkc49fdc.as<PlayerAuthInputPacket>();
                if (pkt.getInput(::PlayerAuthInputPacket::InputData::StartJumping) && inputstate.mUnk4c2da7.as<bool>()
                    && input.mUnkdc47ce.as<bool>()) {
                    EventBus::getInstance().publish(PlayerJumpEvent(static_cast<ServerPlayer&>(*actor)));
                }
            }
        }
    }
}


static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    memory::HookRegistrar<PlayerJumpEventHook1> hook1;
    memory::HookRegistrar<PlayerJumpEventHook2> hook2;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
