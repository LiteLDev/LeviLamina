#include "ll/api/event/player/PlayerUseItemEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/gamemode/GameMode.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerUseItemEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["item"] = (uintptr_t)&item();
}

ItemStack& PlayerUseItemEvent::item() const { return mItem; }

LL_TYPE_INSTANCE_HOOK(
    PlayerUseItemEventHook,
    HookPriority::Normal,
    GameMode,
    &GameMode::baseUseItem,
    bool,
    ItemStack& item
) {
    auto ev = PlayerUseItemEvent(this->getPlayer(), item);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(item);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerUseItemEventEmitter : public Emitter<emitterFactory, PlayerUseItemEvent> {
    memory::HookRegistrar<PlayerUseItemEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerUseItemEventEmitter>();
}

} // namespace ll::event::inline player
