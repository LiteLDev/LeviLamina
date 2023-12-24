#include "ll/api/event/world/FireSpreadEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/block/FireBlock.h"


namespace ll::event::inline world {
void FireSpreadEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = pos().toString();
}

BlockPos const& FireSpreadEvent::pos() const { return mPos; }

bool onFireSpread_OnPlace = false;

LL_TYPED_INSTANCE_HOOK(
    FireSpreadEventHook1,
    HookPriority::Normal,
    FireBlock,
    &FireBlock::onPlace,
    void,
    BlockSource&    blockSource,
    BlockPos const& blockPos
) {
    onFireSpread_OnPlace = true;
    origin(blockSource, blockPos);
    onFireSpread_OnPlace = false;
}

LL_TYPED_INSTANCE_HOOK(
    FireSpreadEventHook2,
    HookPriority::Normal,
    FireBlock,
    &FireBlock::mayPlace,
    bool,
    BlockSource&    blockSource,
    BlockPos const& blockPos
) {
    auto res = origin(blockSource, blockPos);
    if (!onFireSpread_OnPlace || !res) return res;

    auto event = FireSpreadEvent{blockSource, blockPos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return false;
    }
    return res;
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class FireSpreadEventEmitter : public Emitter<FireSpreadEvent, spawnedEmitterFactory> {
    memory::HookRegistrar<FireSpreadEventHook1> hook1;
    memory::HookRegistrar<FireSpreadEventHook2> hook2;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<FireSpreadEventEmitter>();
}

} // namespace ll::event::inline world
