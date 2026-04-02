#include "ll/api/event/command/ClientCommandRegisterEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/packet/AvailableCommandsPacket.h"

namespace ll::event::inline command {

void ClientCommandRegisterEvent::serialize(CompoundTag& nbt) const { CommandRegisterEvent::serialize(nbt); }

LL_TYPE_INSTANCE_HOOK(
    ClientCommandRegisterEventHook,
    ll::memory::HookPriority::Highest,
    CommandRegistry,
    &CommandRegistry::loadRemoteCommands,
    void,
    AvailableCommandsPacket const& packet
) {
    origin(packet);
    EventBus::getInstance().publish(ClientCommandRegisterEvent(*this));
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ClientCommandRegisterEventEmitter : public Emitter<emitterFactory, ClientCommandRegisterEvent> {
    memory::HookRegistrar<ClientCommandRegisterEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ClientCommandRegisterEventEmitter>(); }

} // namespace ll::event::inline command
