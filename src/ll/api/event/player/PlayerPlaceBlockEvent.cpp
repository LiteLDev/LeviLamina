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
void PlayerPlacingBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["face"] = face();
}
void PlayerPlacedBlockEvent::serialize(CompoundTag& nbt) const {
    PlayerPlaceBlockEvent::serialize(nbt);
    nbt["placedBlock"] = (uintptr_t)&placedBlock();
}

BlockPos const& PlayerPlaceBlockEvent::pos() const { return mPos; }
uchar const&    PlayerPlacingBlockEvent::face() const { return mFace; }
Block const&    PlayerPlacedBlockEvent::placedBlock() const { return mPlacedBlock; }

LL_TYPE_INSTANCE_HOOK(
    PlayerPlacingBlockEventHook,
    HookPriority::Normal,
    BlockSource,
    &BlockSource::checkBlockPermissions,
    bool,
    Actor&               actor,
    BlockPos const&      blockpos,
    uchar                face,
    ItemStackBase const& item,
    bool                 genParticle
) {
    if (actor.isPlayer()) {
        auto event = PlayerPlacingBlockEvent{static_cast<Player&>(actor), blockpos, face};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return false;
        }
    }
    return origin(actor, blockpos, face, item, genParticle);
}

LL_TYPE_INSTANCE_HOOK(
    PlayerPlacedBlockEventHook,
    HookPriority::Normal,
    BlockEventCoordinator,
    &BlockEventCoordinator::sendBlockPlacedByPlayer,
    void,
    Player&         player,
    Block const&    placedBlock,
    BlockPos const& blockpos,
    bool            isUnderwater
) {
    auto event = PlayerPlacedBlockEvent{player, blockpos, placedBlock};
    EventBus::getInstance().publish(event);
    return origin(player, placedBlock, blockpos, isUnderwater);
}


static std::unique_ptr<EmitterBase> placingEmitterFactory(ListenerBase&);
class PlayerPlacingBlockEventEmitter : public Emitter<placingEmitterFactory, PlayerPlacingBlockEvent> {
    memory::HookRegistrar<PlayerPlacingBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> placingEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPlacingBlockEventEmitter>();
}

static std::unique_ptr<EmitterBase> placedEmitterFactory(ListenerBase&);
class PlayerPlacedBlockEventEmitter : public Emitter<placedEmitterFactory, PlayerPlacedBlockEvent> {
    memory::HookRegistrar<PlayerPlacedBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> placedEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPlacedBlockEventEmitter>();
}

} // namespace ll::event::inline player
