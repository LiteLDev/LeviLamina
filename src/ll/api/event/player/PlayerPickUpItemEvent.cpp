#include "ll/api/event/player/PlayerPickUpItemEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerPickUpItemEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["item"]        = (uintptr_t)&itemActor();
    nbt["orgCount"]    = orgCount();
    nbt["favoredSlot"] = favoredSlot();
}

void PlayerPickUpItemEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    orgCount()    = nbt["orgCount"];
    favoredSlot() = nbt["favoredSlot"];
}

ItemActor& PlayerPickUpItemEvent::itemActor() const { return mItemActor; }
int&       PlayerPickUpItemEvent::orgCount() const { return mOrgCount; }
int&       PlayerPickUpItemEvent::favoredSlot() const { return mFavoredSlot; }

LL_TYPE_INSTANCE_HOOK(
    PlayerPickUpItemEventHook,
    HookPriority::Normal,
    Player,
    &Player::take,
    bool,
    Actor& itemActor,
    int    orgCount,
    int    favoredSlot
) {
    if (itemActor.hasCategory(ActorCategory::Item)) {
        auto ev = PlayerPickUpItemEvent(*this, static_cast<ItemActor&>(itemActor), orgCount, favoredSlot);
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return false;
        }
    }
    return origin(itemActor, orgCount, favoredSlot);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerPickUpItemEventEmitter : public Emitter<emitterFactory, PlayerPickUpItemEvent> {
    memory::HookRegistrar<PlayerPickUpItemEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPickUpItemEventEmitter>();
}

} // namespace ll::event::inline player
