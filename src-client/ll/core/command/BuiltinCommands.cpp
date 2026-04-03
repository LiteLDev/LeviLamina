#include "ll/core/command/BuiltinCommands.h"

#include <memory>

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/Listener.h"
#include "ll/api/event/command/ClientCommandRegisterEvent.h"
#include "ll/api/event/command/ServerCommandRegisterEvent.h"
#include "ll/api/event/server/ServerStoppingEvent.h"

namespace ll::command {

ll::event::ListenerPtr serverRegisterListener;
ll::event::ListenerPtr clientRegisterListener;
ll::event::ListenerPtr serverStoppingListener;

void registerCommands() {
    auto& bus = ll::event::EventBus::getInstance();

    if (!serverRegisterListener) {
        serverRegisterListener = bus.emplaceListener<ll::event::command::ServerCommandRegisterEvent>(
            [](ll::event::command::ServerCommandRegisterEvent&) {
                auto& registrar = CommandRegistrar::getServerInstance();
                registrar.clear();
                registerVersionCommand(false);
                registerCrashCommand(false);
                registerModManageCommand(false);
                registerTpdimCommand(false);
            }
        );
    }

    if (!clientRegisterListener) {
        clientRegisterListener = bus.emplaceListener<ll::event::command::ClientCommandRegisterEvent>(
            [](ll::event::command::ClientCommandRegisterEvent&) {
                auto& registrar = CommandRegistrar::getClientInstance();
                registrar.clear();
                registerVersionCommand(true);
                registerCrashCommand(true);
                registerModManageCommand(true);
            }
        );
    }

    if (!serverStoppingListener) {
        serverStoppingListener =
            bus.emplaceListener<ll::event::server::ServerStoppingEvent>([](ll::event::server::ServerStoppingEvent&) {
                CommandRegistrar::getServerInstance().clear();
            });
    }
}

} // namespace ll::command
