#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/world/level/Level.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerChangePermEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["permission"] = magic_enum::enum_name(newPerm());
}

void PlayerChangePermEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    magic_enum::enum_cast<PlayerPermissionLevel>((std::string_view)nbt["permission"])
        .transform([this](PlayerPermissionLevel val) {
            newPerm() = val;
            return true;
        });
}

PlayerPermissionLevel& PlayerChangePermEvent::newPerm() const { return mMewPerm; }

// From 1.21.60.10, mojang modified the inline function expansion of msvc to /Ob3, that caused lots of functions were
// inlined, including Player::setPermissions, so there's no perfect function for us to hook, now this event can only
// listen to /op, /deop commands and permission changes of the pause menu and only provide PlayerPermissionLevel.
LL_TYPE_INSTANCE_HOOK(
    PlayerChangePermEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::persistPlayerPermissionsToDisk,
    void,
    UserEntityIdentifierComponent const& userIdentifier,
    PlayerPermissionLevel                permission
) {
    auto level = ll::service::getLevel();
    if (level) {
        auto player = level->getPlayer(userIdentifier.mClientUUID);
        auto event  = PlayerChangePermEvent{*player, permission};
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return;
        }
    }
    origin(userIdentifier, permission);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerChangePermEventEmitter : public Emitter<emitterFactory, PlayerChangePermEvent> {
    memory::HookRegistrar<PlayerChangePermEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerChangePermEventEmitter>(); }

} // namespace ll::event::inline player
