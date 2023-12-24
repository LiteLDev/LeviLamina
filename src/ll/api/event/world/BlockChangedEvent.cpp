#include "ll/api/event/world/BlockChangedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/Actor.h"


namespace ll::event::inline world {
void BlockChangedEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["previousBlock"] = (uintptr_t)&previousBlock();
    nbt["newBlock"]      = (uintptr_t)&newBlock();
    nbt["pos"]           = ListTag{blockPos().x, blockPos().y, blockPos().z};
}

Block const&    BlockChangedEvent::previousBlock() const { return mPreviousBlock; }
Block const&    BlockChangedEvent::newBlock() const { return mNewBlock; }
BlockPos const& BlockChangedEvent::blockPos() const { return mBlockPos; }

LL_TYPED_INSTANCE_HOOK(
    BlockChangedEventHook,
    HookPriority::Normal,
    BlockSource,
    &BlockSource::_blockChanged,
    void,
    BlockPos const&              blockPos,
    uint                         a3,
    Block const&                 afterBlock,
    Block const&                 beforeBlock,
    int                          a6,
    ActorBlockSyncMessage const* a7,
    Actor*                       actor
) {
    auto event = BlockChangedEvent{actor->getDimensionBlockSource(), beforeBlock, afterBlock, blockPos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    return origin(blockPos, a3, afterBlock, beforeBlock, a6, a7, actor);
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class BlockChangedEventEmitter : public Emitter<BlockChangedEvent, spawnedEmitterFactory> {
    memory::HookRegistrar<BlockChangedEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<BlockChangedEventEmitter>();
}

} // namespace ll::event::inline world
