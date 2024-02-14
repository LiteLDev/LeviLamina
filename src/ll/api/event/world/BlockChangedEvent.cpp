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

LL_TYPE_INSTANCE_HOOK(
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

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class BlockChangedEventEmitter : public Emitter<emitterFactory, BlockChangedEvent> {
    memory::HookRegistrar<BlockChangedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<BlockChangedEventEmitter>();
}

} // namespace ll::event::inline world
