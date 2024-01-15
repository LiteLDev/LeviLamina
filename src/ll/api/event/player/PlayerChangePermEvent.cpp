#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerChangePermEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["permission"] = magic_enum::enum_name(newPerm());
}

void PlayerChangePermEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
#if _HAS_CXX23
    magic_enum::enum_cast<CommandPermissionLevel>((std::string_view)nbt["permission"])
        .transform([this](CommandPermissionLevel val) {
            newPerm() = val;
            return true;
        });
#endif
}

CommandPermissionLevel& PlayerChangePermEvent::newPerm() const { return mMewPerm; }

LL_TYPE_INSTANCE_HOOK(
    PlayerChangePermEventHook,
    HookPriority::Normal,
    Player,
    &Player::setPermissions,
    void,
    CommandPermissionLevel perm
) {
    auto event = PlayerChangePermEvent{*this, perm};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    origin(perm);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerChangePermEventEmitter : public Emitter<emitterFactory, PlayerChangePermEvent> {
    memory::HookRegistrar<PlayerChangePermEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerChangePermEventEmitter>();
}

} // namespace ll::event::inline player
