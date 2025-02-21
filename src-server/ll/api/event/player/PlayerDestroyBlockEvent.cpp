#include "ll/api/event/player/PlayerDestroyBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/gamemode/GameMode.h"
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
    GameMode,
    &GameMode::_sendTryDestroyBlockEvent,
    ::std::optional<::ItemStack>,
    ::Block const&    block,
    ::BlockPos const& pos,
    ::ItemStack       itemBeforeEvent
) {
    auto event = PlayerDestroyBlockEvent{mPlayer, pos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return std::nullopt;
    }
    return origin(block, pos, itemBeforeEvent);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerDestroyBlockEventEmitter : public Emitter<emitterFactory, PlayerDestroyBlockEvent> {
    memory::HookRegistrar<PlayerDestroyBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerDestroyBlockEventEmitter>(); }

} // namespace ll::event::inline player
