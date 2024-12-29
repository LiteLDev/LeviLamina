#include "ll/api/event/world/FireSpreadEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/block/FireBlock.h"
#include "mc/world/level/block/block_events/BlockPlaceEvent.h"

namespace ll::event::inline world {
void FireSpreadEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& FireSpreadEvent::pos() const { return mPos; }

thread_local bool onFireSpreadWhenOnPlace = false;

LL_TYPE_INSTANCE_HOOK(
    FireSpreadEventHook1,
    HookPriority::Normal,
    FireBlock,
    &FireBlock::onPlace,
    void,
    BlockEvents::BlockPlaceEvent& eventData
) {
    onFireSpreadWhenOnPlace = true;
    origin(eventData);
    onFireSpreadWhenOnPlace = false;
}

LL_TYPE_INSTANCE_HOOK(
    FireSpreadEventHook2,
    HookPriority::Normal,
    FireBlock,
    &FireBlock::$mayPlace,
    bool,
    BlockSource&    blockSource,
    BlockPos const& blockPos
) {
    auto res = origin(blockSource, blockPos);
    if (!onFireSpreadWhenOnPlace || !res) return res;
    auto event = FireSpreadEvent{blockSource, blockPos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return false;
    }
    return res;
}

static std::unique_ptr<EmitterBase> emitterFactory();
class FireSpreadEventEmitter : public Emitter<emitterFactory, FireSpreadEvent> {
    memory::HookRegistrar<FireSpreadEventHook1> hook1;
    memory::HookRegistrar<FireSpreadEventHook2> hook2;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<FireSpreadEventEmitter>(); }

} // namespace ll::event::inline world
