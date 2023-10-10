#include "ll/api/event/server/ServerStoppedEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

#include "ll/core/Config.h"

namespace ll::event::server {

ServerStoppedEvent::ServerStoppedEvent() = default;

LL_AUTO_INSTANCE_HOOK(ServerStoppedEventHook, ll::memory::HookPriority::Normal, "??1DedicatedServer@@UEAA@XZ", void, ) {
    ll::globalRuntimeConfig.serverStatus = ll::LLServerStatus::Stopping;
    ServerStoppedEvent ev;
    EventManager<ServerStoppedEvent>::fireEvent(ev);
    origin();
}

LL_AUTO_INSTANCE_HOOK(
    ServerStoppedEventHook2,
    ll::memory::HookPriority::Normal,
    "?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z",
    void,
    class CommandOrigin const& origin,
    class CommandOutput&       output
) {
    ll::globalRuntimeConfig.serverStatus = ll::LLServerStatus::Stopping;
    this->origin(origin, output);
}

} // namespace ll::event::server

LL_EVENT_IMPL(server::ServerStoppedEvent)
