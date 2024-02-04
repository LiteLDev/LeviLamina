#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"

namespace ll::core::command {
auto commandRegister = []() -> bool {
    using event::EventBus, event::ServerStartedEvent;
    auto& ins = EventBus::getInstance();
    ins.emplaceListener<ServerStartedEvent>([](ServerStartedEvent const&) { registerVersionCommand(); });
    return true;
}();
}
