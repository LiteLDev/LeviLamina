#include "ll/api/event/command/ServerCommandRegisterEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"

#include "mc/server/DedicatedServerCommands.h"

namespace ll::event::inline command {

LL_TYPE_STATIC_HOOK(
    ServerCommandRegisterEventHook,
    ll::memory::HookPriority::Highest,
    DedicatedServerCommands,
    &DedicatedServerCommands::setupStandaloneServer,
    void,
    ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft,
    ::IMinecraftApp&                                  app,
    ::Level&                                          level,
    ::LevelStorage&                                   levelStorage,
    ::DedicatedServer&                                dedicatedServer,
    ::AllowListFile&                                  allowListFile,
    ::ScriptSettings*                                 scriptSettings
) {
    origin(minecraft, app, level, levelStorage, dedicatedServer, allowListFile, scriptSettings);
    if (auto registry = ll::service::getCommandRegistry(false)) {
        EventBus::getInstance().publish(ServerCommandRegisterEvent(*registry, false));
    }
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerCommandRegisterEventEmitter : public Emitter<emitterFactory, ServerCommandRegisterEvent> {
    memory::HookRegistrar<ServerCommandRegisterEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerCommandRegisterEventEmitter>(); }

} // namespace ll::event::inline command
