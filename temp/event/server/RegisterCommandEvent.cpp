#include "ll/api/event/server/RegisterCommandEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "ll/api/DynamicCommandAPI.h"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

namespace ll::event::server {

RegisterCommandEvent::RegisterCommandEvent(CommandRegistry* registry) : registry(registry) {}

LL_GETTER_IMPL(RegisterCommandEvent, CommandRegistry*, registry, getRegistry);

LL_AUTO_TYPED_INSTANCE_HOOK(
    RegCmdEventHook,
    CommandRegistry,
    HookPriority::Normal,
    "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
    void,
    void* a1
) {
    Global<CommandRegistry> = this;
    origin(a1);

    RegisterCommandEvent event(this);
    EventManager<RegisterCommandEvent>::fireEvent(event);
    // setup dynamic command
    DynamicCommand::onServerCommandsRegister(*this);
}

} // namespace ll::event::server

LL_EVENT_IMPL(server::RegisterCommandEvent)
