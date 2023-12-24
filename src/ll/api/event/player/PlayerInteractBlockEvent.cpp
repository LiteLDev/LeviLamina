#include "ll/api/event/player/PlayerInteractBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/server/module/VanillaServerGameplayEventListener.h"

namespace ll::event::inline player {
void PlayerInteractBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& PlayerInteractBlockEvent::pos() const { return mPos; }

LL_TYPED_INSTANCE_HOOK(
    PlayerInteractBlockEventHook,
    HookPriority::Normal,
    VanillaServerGameplayEventListener,
    &VanillaServerGameplayEventListener::onBlockInteractedWith,
    EventResult,
    Player&         player,
    BlockPos const& blockPos
) {
    auto event = PlayerInteractBlockEvent{player, blockPos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return (EventResult)0;
    }
    return origin(player, blockPos);
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class PlayerInteractBlockEventEmitter : public Emitter<PlayerInteractBlockEvent, spawnedEmitterFactory> {
    memory::HookRegistrar<PlayerInteractBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerInteractBlockEventEmitter>();
}

} // namespace ll::event::inline player
