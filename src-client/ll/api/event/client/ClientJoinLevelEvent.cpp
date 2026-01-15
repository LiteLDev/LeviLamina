#include "ll/api/event/client/ClientJoinLevelEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/module/GameModuleClient.h"
#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline client {

void ClientJoinLevelEvent::serialize(CompoundTag& nbt) const {
    ClientEvent::serialize(nbt);
    nbt["player"] = serializeRefObj(mPlayer);
}

Player& ClientJoinLevelEvent::player() const { return mPlayer; }

LL_TYPE_INSTANCE_HOOK(
    ClientSetupGameHook,
    HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$onPlayerLoaded,
    void,
    Player& player
) {
    EventBus::getInstance().publish(ClientJoinLevelEvent(*this, player));
    origin(player);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientJoinLevelEventEmitter : public Emitter<emitterFactory, ClientJoinLevelEvent> {
    memory::HookRegistrar<ClientSetupGameHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientJoinLevelEventEmitter>(); }

} // namespace ll::event::inline client
