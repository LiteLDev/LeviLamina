#include "ll/api/event/player/PlayerDestroyBlockEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "mc/scripting/event_handlers/ScriptBlockGameplayHandler.h"
#include "mc/world/level/block/Block.h"


namespace ll::event::inline player {

void PlayerDestroyBlockEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["pos"] = ListTag{pos().x, pos().y, pos().z};
}

BlockPos const& PlayerDestroyBlockEvent::pos() const { return mPos; }

LL_TYPE_INSTANCE_HOOK(
    PlayerDestroyBlockEventHook,
    HookPriority::Normal,
    ScriptBlockGameplayHandler,
    &ScriptBlockGameplayHandler::$handleEvent,
    GameplayHandlerResult<::CoordinatorResult>,
    BlockTryDestroyByPlayerEvent& eventData
) {
    auto actor = eventData.mPlayer->tryUnwrap();
    if (!actor) {
        return origin(eventData);
    }
    Player& player = static_cast<Player&>(actor.value());
    auto    event  = PlayerDestroyBlockEvent{player, eventData.mPos};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return {HandlerResult::BypassListeners, CoordinatorResult::Cancel};
    }
    return origin(eventData);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerDestroyBlockEventEmitter : public Emitter<emitterFactory, PlayerDestroyBlockEvent> {
    memory::HookRegistrar<PlayerDestroyBlockEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerDestroyBlockEventEmitter>(); }

} // namespace ll::event::inline player
