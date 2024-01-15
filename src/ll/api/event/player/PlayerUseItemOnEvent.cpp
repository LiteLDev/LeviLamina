#include "ll/api/event/player/PlayerUseItemOnEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/common/wrapper/InteractionResult.h"
#include "mc/world/gamemode/GameMode.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerUseItemOnEvent::serialize(CompoundTag& nbt) const {
    PlayerUseItemEvent::serialize(nbt);
    nbt["blockPos"] = ListTag{blockPos().x, blockPos().y, blockPos().z};
    nbt["face"]     = face();
    nbt["clickPos"] = ListTag{clickPos().x, clickPos().y, clickPos().z};
    if (block()) {
        nbt["block"] = (uintptr_t)(block().as_ptr());
    }
}

BlockPos const&           PlayerUseItemOnEvent::blockPos() const { return mBlockPos; }
uchar const&              PlayerUseItemOnEvent::face() const { return mFace; }
Vec3 const&               PlayerUseItemOnEvent::clickPos() const { return mClickPos; }
optional_ref<Block const> PlayerUseItemOnEvent::block() const { return mBlock; }

LL_TYPE_INSTANCE_HOOK(
    PlayerUseItemOnEventHook,
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
    auto ev = PlayerUseItemOnEvent(this->getPlayer(), item, blockPos, face, clickPos, block);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return {InteractionResult::Result::Fail};
    }
    return origin(item, blockPos, face, clickPos, block);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerUseItemOnEventEmitter : public Emitter<emitterFactory, PlayerUseItemOnEvent> {
    memory::HookRegistrar<PlayerUseItemOnEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerUseItemOnEventEmitter>();
}

} // namespace ll::event::inline player
