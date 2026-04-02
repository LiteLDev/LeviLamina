#include "ll/api/event/command/ServerCommandRegisterEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/server/commands/ServerCommands.h"

namespace ll::event::inline command {

LL_STATIC_HOOK(
    ServerCommandRegisterEventHook,
    HookPriority::Highest,
    &ServerCommands::setupStandardServer,
    void,
    Minecraft&         server,
    std::string const& networkCommands,
    std::string const& networkTestCommands,
    PermissionsFile*   permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    if (auto registry = ll::service::getCommandRegistry(false)) {
        EventBus::getInstance().publish(ServerCommandRegisterEvent(*registry, true));
    }
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerCommandRegisterEventEmitter : public Emitter<emitterFactory, ServerCommandRegisterEvent> {
    memory::HookRegistrar<ServerCommandRegisterEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerCommandRegisterEventEmitter>(); }

} // namespace ll::event::inline command
