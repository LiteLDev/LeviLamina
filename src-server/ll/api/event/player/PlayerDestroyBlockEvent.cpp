#include "ll/api/event/player/PlayerDestroyBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline player {

void PlayerDestroyBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& PlayerDestroyBlockEvent::pos() const { return mPos; }

LL_TYPE_INSTANCE_HOOK(
    PlayerDestroyBlockEventHook,
    HookPriority::Normal,
    Block,
    &Block::playerWillDestroy,
    Block const*,
    Player&         player,
    BlockPos const& pos
) {
    auto event = PlayerDestroyBlockEvent{player, pos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return nullptr;
    }
    return origin(player, pos);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerDestroyBlockEventEmitter : public Emitter<emitterFactory, PlayerDestroyBlockEvent> {
    memory::HookRegistrar<PlayerDestroyBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerDestroyBlockEventEmitter>();
}

} // namespace ll::event::inline player
