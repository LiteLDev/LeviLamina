#include "ll/api/event/player/PlayerInteractBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/common/wrapper/InteractionResult.h"
#include "mc/world/gamemode/GameMode.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerInteractBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["item"]     = (uintptr_t)&item();
    nbt["blockPos"] = ListTag{blockPos().x, blockPos().y, blockPos().z};
    nbt["face"]     = magic_enum::enum_name(face());
    nbt["clickPos"] = ListTag{clickPos().x, clickPos().y, clickPos().z};
    if (block()) {
        nbt["block"] = (uintptr_t)(block().as_ptr());
    }
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
    "?useItemOn@GameMode@@UEAA?AVInteractionResult@@AEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
    InteractionResult,
    ItemStack&      item,
    BlockPos const& blockPos,
    uchar           face,
    Vec3 const&     clickPos,
    Block const*    block
) {
    auto ev = PlayerInteractBlockEvent(
        this->getPlayer(),
        item,
        blockPos,
        *reinterpret_cast<FacingID*>(&face),
        clickPos,
        block
    );
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return {InteractionResult::Result::Fail};
    }
    return origin(item, blockPos, face, clickPos, block);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerInteractBlockEventEmitter : public Emitter<emitterFactory, PlayerInteractBlockEvent> {
    memory::HookRegistrar<PlayerInteractBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerInteractBlockEventEmitter>();
}

} // namespace ll::event::inline player
