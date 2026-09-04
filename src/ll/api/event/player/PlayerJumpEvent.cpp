#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/vanilla_components/WasOnGroundFlagComponent.h"
#include "mc/entity/systems/ServerPlayerMovementCorrectionSystem.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/Level.h"


namespace ll::event::inline player {

void PlayerJumpEvent::serialize(CompoundTag& nbt) const {
    PlayerEvent::serialize(nbt);
    nbt["fromPosition"] = ListTag{mFromPosition.x, mFromPosition.y, mFromPosition.z};
    nbt["toPosition"]   = ListTag{mToPosition.x, mToPosition.y, mToPosition.z};
}
Vec3 const& PlayerJumpEvent::fromPosition() { return mFromPosition; }
Vec3 const& PlayerJumpEvent::toPosition() { return mToPosition; }

LL_TYPE_INSTANCE_HOOK(
    PlayerJumpEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&     source,
    PlayerAuthInputPacket const& packet
) {
    origin(source, packet);
    if (auto player = _getServerPlayer(source, packet.mSenderSubId);
        player && packet.mInputData->test(static_cast<size_t>(PlayerAuthInputPacket::InputData::Jumping))
        && player->isOnGround() && *packet.mPos - player->getPosition() > 0.0f) {
        auto event = PlayerJumpEvent(*player, player->getPosition(), *packet.mPos);
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            player->teleport(player->getPosition(), player->getDimensionId());
        }
    }
}


static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    // memory::HookRegistrar<PlayerJumpEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
