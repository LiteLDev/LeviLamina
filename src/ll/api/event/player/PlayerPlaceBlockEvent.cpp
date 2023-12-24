#include "ll/api/event/player/PlayerPlaceBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/BlockEventCoordinator.h"
#include "mc/world/level/BlockSource.h"


namespace ll::event::inline player {
void PlayerPlaceBlockEvent::serialize(CompoundTag& nbt) const {
    PlayerEvent::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& PlayerPlaceBlockEvent::pos() const { return mPos; }

LL_TYPED_INSTANCE_HOOK(
    PlayerPlacingBlockEventHook,
    HookPriority::Normal,
    BlockSource,
    &BlockSource::checkBlockPermissions,
    bool,
    Actor&               actor,
    BlockPos const&      blockpos,
    uchar                facing,
    ItemStackBase const& item,
    bool                 a6
) {
    if (actor.isPlayer()) {
        auto event = PlayerPlacingBlockEvent{*(Player*)&actor, blockpos};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return false;
        }
    }
    return origin(actor, blockpos, facing, item, a6);
}

LL_TYPED_INSTANCE_HOOK(
    PlayerPlacedBlockEventHook,
    HookPriority::Normal,
    BlockEventCoordinator,
    &BlockEventCoordinator::sendBlockPlacedByPlayer,
    void,
    Player&         player,
    Block const&    block,
    BlockPos const& blockpos,
    bool            a5
) {
    auto event = PlayerPlacedBlockEvent{player, blockpos};
    EventBus::getInstance().publish(event);
    return origin(player, block, blockpos, a5);
}


static std::unique_ptr<EmitterBase> spawningEmitterFactory(ListenerBase&);
class PlayerPlacingBlockEventEmitter : public Emitter<PlayerPlacingBlockEvent, spawningEmitterFactory> {
    memory::HookRegistrar<PlayerPlacingBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawningEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPlacingBlockEventEmitter>();
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class PlayerPlacedBlockEventEmitter : public Emitter<PlayerPlacedBlockEvent, spawnedEmitterFactory> {
    memory::HookRegistrar<PlayerPlacedBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPlacedBlockEventEmitter>();
}

} // namespace ll::event::inline player
