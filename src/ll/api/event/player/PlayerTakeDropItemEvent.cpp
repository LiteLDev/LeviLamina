#include "ll/api/event/player/PlayerTakeDropItemEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

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

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerTakeDropItemEventEmitter : public Emitter<PlayerTakeDropItemEvent, emitterFactory> {
public:
    PlayerTakeDropItemEventEmitter() { PlayerTakeDropItemEventHook::hook(); }
    ~PlayerTakeDropItemEventEmitter() override { PlayerTakeDropItemEventHook::unhook(); }
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerTakeDropItemEventEmitter>();
}

} // namespace ll::event::inline player
