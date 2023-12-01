#include "ll/api/event/player/PlayerTakeDropItemEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::player {

LL_TYPED_INSTANCE_HOOK(
    PlayerTakeDropItemEventHook,
    HookPriority::Normal,
    Player,
    &Player::take,
    bool,
    Actor& itemActor,
    int    i0,
    int    i1
) {
    if (itemActor.isItemActor()) {
        auto ev = PlayerTakeDropItemEvent(*this, *(ItemActor*)(&itemActor));
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return false;
        }
    }
    return origin(itemActor, i0, i1);
}

class PlayerTakeDropItemEventEmitter : public Emitter<PlayerTakeDropItemEvent> {
public:
    PlayerTakeDropItemEventEmitter() { PlayerTakeDropItemEventHook::hook(); } // namespace ll::event::player
    ~PlayerTakeDropItemEventEmitter() override { PlayerTakeDropItemEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerTakeDropItemEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerTakeDropItemEventEmitter>();
}

} // namespace ll::event::player
