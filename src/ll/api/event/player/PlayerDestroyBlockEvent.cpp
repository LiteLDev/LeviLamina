#include "ll/api/event/player/PlayerDestroyBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/gamemode/GameMode.h"

namespace ll::event::inline player {

void PlayerDestroyBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& PlayerDestroyBlockEvent::pos() const { return mPos; }

LL_TYPED_INSTANCE_HOOK(
    PlayerDestroyBlockEventHook,
    HookPriority::Normal,
    GameMode,
    "?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z",
    bool,
    BlockPos const& blockpos,
    uchar           a4
) {
    auto event = PlayerDestroyBlockEvent{this->getPlayer(), blockpos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return false;
    }
    return origin(blockpos, a4);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerDestroyBlockEventEmitter : public Emitter<PlayerDestroyBlockEvent, emitterFactory> {
    memory::HookRegistrar<PlayerDestroyBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerDestroyBlockEventEmitter>();
}

} // namespace ll::event::inline player
