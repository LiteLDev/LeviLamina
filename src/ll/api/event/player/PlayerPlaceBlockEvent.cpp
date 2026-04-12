#include "ll/api/event/player/PlayerPlaceBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/events/BlockEventCoordinator.h"
#include "mc/world/gamemode/GameMode.h"
#include "mc/world/gamemode/InteractionResult.h"
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
    nbt["placedBlock"] = serializeRefObj(placedBlock());
}

BlockPos const& PlayerPlaceBlockEvent::pos() const { return mPos; }
uchar const&    PlayerPlacingBlockEvent::face() const { return mFace; }
Block const&    PlayerPlacedBlockEvent::placedBlock() const { return mPlacedBlock; }

static thread_local bool isUsingItem = false;

LL_TYPE_INSTANCE_HOOK(
    PlayerPlacingBlockEventCallerHook,
    HookPriority::High,
    GameMode,
    &GameMode::$useItemOn,
    InteractionResult,
    ItemStack&      item,
    BlockPos const& blockPos,
    uchar           face,
    Vec3 const&     clickPos,
    Block const*    block,
    bool            isFirstEvent
) {
    isUsingItem = true;
    auto result = origin(item, blockPos, face, clickPos, block, isFirstEvent);
    isUsingItem = false;
    return result;
}

LL_TYPE_INSTANCE_HOOK(
    PlayerPlacingBlockEventHook,
    HookPriority::Normal,
    BlockSource,
    &BlockSource::$checkBlockPermissions,
    bool,
    Actor&               actor,
    BlockPos const&      blockpos,
    uchar                face,
    ItemStackBase const& item,
    bool                 genParticle
) {
    if (isUsingItem && actor.getEntityTypeId() == ActorType::Player) {
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


static std::unique_ptr<EmitterBase> placingEmitterFactory();
class PlayerPlacingBlockEventEmitter : public Emitter<placingEmitterFactory, PlayerPlacingBlockEvent> {
    memory::HookRegistrar<PlayerPlacingBlockEventHook, PlayerPlacingBlockEventCallerHook> hook;
};

static std::unique_ptr<EmitterBase> placingEmitterFactory() {
    return std::make_unique<PlayerPlacingBlockEventEmitter>();
}

static std::unique_ptr<EmitterBase> placedEmitterFactory();
class PlayerPlacedBlockEventEmitter : public Emitter<placedEmitterFactory, PlayerPlacedBlockEvent> {
    memory::HookRegistrar<PlayerPlacedBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> placedEmitterFactory() { return std::make_unique<PlayerPlacedBlockEventEmitter>(); }

} // namespace ll::event::inline player
