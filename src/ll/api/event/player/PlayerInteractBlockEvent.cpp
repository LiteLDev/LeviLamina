#include "ll/api/event/player/PlayerInteractBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/gamemode/GameMode.h"
#include "mc/world/gamemode/InteractionResult.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerInteractBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["item"]     = serializeRefObj(item());
    nbt["blockPos"] = ListTag{blockPos().x, blockPos().y, blockPos().z};
    nbt["face"]     = magic_enum::enum_name(face());
    nbt["clickPos"] = ListTag{clickPos().x, clickPos().y, clickPos().z};
    nbt["block"]    = serializePtrObj(block().as_ptr());
}
ItemStack&                PlayerInteractBlockEvent::item() const { return mItem; }
BlockPos const&           PlayerInteractBlockEvent::blockPos() const { return mBlockPos; }
FacingID const&           PlayerInteractBlockEvent::face() const { return mFace; }
Vec3 const&               PlayerInteractBlockEvent::clickPos() const { return mClickPos; }
optional_ref<Block const> PlayerInteractBlockEvent::block() const { return mBlock; }

LL_TYPE_INSTANCE_HOOK(
    PlayerInteractBlockEventHook,
    HookPriority::Normal,
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
    auto ev =
        PlayerInteractBlockEvent(this->mPlayer, item, blockPos, *reinterpret_cast<FacingID*>(&face), clickPos, block);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return {InteractionResult::Result::Fail};
    }
    return origin(item, blockPos, face, clickPos, block, isFirstEvent);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerInteractBlockEventEmitter : public Emitter<emitterFactory, PlayerInteractBlockEvent> {
    memory::HookRegistrar<PlayerInteractBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerInteractBlockEventEmitter>(); }

} // namespace ll::event::inline player
