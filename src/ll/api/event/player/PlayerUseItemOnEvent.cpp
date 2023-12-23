#include "ll/api/event/player/PlayerUseItemOnEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerUseItemOnEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["item"]        = (uintptr_t)&item();
    nbt["blocksource"] = (uintptr_t)&blocksource();
    nbt["face"]        = face();
    nbt["clickPos"]    = clickPos().toString();
}

ItemStack&         PlayerUseItemOnEvent::item() const { return mItemStack; }
BlockSource const& PlayerUseItemOnEvent::blocksource() const { return mBlockSource; }
unsigned char      PlayerUseItemOnEvent::face() const { return mFace; }
Vec3               PlayerUseItemOnEvent::clickPos() const { return mClickPos; }

LL_TYPED_INSTANCE_HOOK(
    PlayerUseItemOnEventHook,
    HookPriority::Normal,
    GameMode,
    "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
    bool,
    ItemStack& it,
    BlockPos   bp,
    uchar      side,
    Vec3*      clickPos,
    void*      a6_block
) {
    auto ev =
        PlayerUseItemOnEvent(this->getPlayer(), it, this->getPlayer().getDimensionBlockSourceConst(), side, *clickPos);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(it, bp, side, clickPos, a6_block);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerUseItemOnEventEmitter : public Emitter<PlayerUseItemOnEvent, emitterFactory> {
    memory::HookRegistrar<PlayerUseItemOnEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerUseItemOnEventEmitter>();
}

} // namespace ll::event::inline player
