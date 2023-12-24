#include "ll/api/event/world/BlockChangedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/Actor.h"


namespace ll::event::inline world {
void BlockChangedEvent::serialize(CompoundTag& nbt) const {
    WorldEvent::serialize(nbt);
    nbt["layer"]         = layer();
    nbt["previousBlock"] = (uintptr_t)&previousBlock();
    nbt["newBlock"]      = (uintptr_t)&newBlock();
    nbt["pos"]           = ListTag{pos().x, pos().y, pos().z};
}

uint const&     BlockChangedEvent::layer() const { return mLayer; }
Block const&    BlockChangedEvent::previousBlock() const { return mPreviousBlock; }
Block const&    BlockChangedEvent::newBlock() const { return mNewBlock; }
BlockPos const& BlockChangedEvent::pos() const { return mPos; }

LL_TYPED_INSTANCE_HOOK(
    BlockChangedEventHook,
    HookPriority::Normal,
    BlockSource,
    &BlockSource::_blockChanged,
    void,
    BlockPos const&              pos,
    uint                         layer,
    Block const&                 block,
    Block const&                 previousBlock,
    int                          updateFlags,
    ActorBlockSyncMessage const* syncMsg,
    Actor*                       blockChangeSource
) {
    auto event = BlockChangedEvent{*this, layer, previousBlock, block, pos};
    EventBus::getInstance().publish(event);
    return origin(pos, layer, block, previousBlock, updateFlags, syncMsg, blockChangeSource);
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class BlockChangedEventEmitter : public Emitter<BlockChangedEvent, spawnedEmitterFactory> {
    memory::HookRegistrar<BlockChangedEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<BlockChangedEventEmitter>();
}

} // namespace ll::event::inline world
