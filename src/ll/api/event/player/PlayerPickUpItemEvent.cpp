#include "ll/api/event/player/PlayerPickUpItemEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

ItemActor& PlayerPickUpItemEvent::itemActor() const { return mItemActor; }

LL_TYPED_INSTANCE_HOOK(
    PlayerPickUpItemEventHook,
    HookPriority::Normal,
    Player,
    &Player::take,
    bool,
    Actor& itemActor,
    int    orgCount,
    int    favoredSlot
) {
    if (itemActor.isType(ActorType::ItemEntity)) {
        auto ev = PlayerPickUpItemEvent(*this, *(ItemActor*)(&itemActor));
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return false;
        }
    }
    return origin(itemActor, orgCount, favoredSlot);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerPickUpItemEventEmitter : public Emitter<PlayerPickUpItemEvent, emitterFactory> {
    memory::HookRegistrar<PlayerPickUpItemEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerPickUpItemEventEmitter>();
}

} // namespace ll::event::inline player
