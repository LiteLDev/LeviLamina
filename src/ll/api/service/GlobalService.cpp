#include "ll/api/service/GlobalService.h"

#include "mc/common/SharedConstants.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/RakNetServerLocator.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/AllowListFile.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/server/common/commands/AllowListCommand.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/scores/Scoreboard.h"
#include "mc/world/systems/NetworkSystem.h"

#include "ll/api/memory/Hook.h"
#include "ll/api/utils/Hash.h"
#include "ll/core/LeviLamina.h"

template <ll::IsGlobalService T>
ll::GlobalService<T>::GlobalService() = default;

template <ll::IsGlobalService T>
void ll::GlobalService<T>::init(T* ptr) {
    value = ptr;
}

namespace {

using namespace ll::memory;

// Minecraft
LL_AUTO_TYPED_INSTANCE_HOOK(MinecraftService, HookPriority::High, Minecraft, &Minecraft::initAsDedicatedServer, void) {
    ll::Global<Minecraft>.init(this);
    origin();
    ll::Global<CommandRegistry>.init(&getCommands().getRegistry());
}

// ServerLevel
LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    ll::Global<RakNet::RakPeer>.init(
        (RakNet::RakPeer*)((RakNetConnector&)(*ll::Global<Minecraft>->getNetworkSystem().getRemoteConnector()))
            .getPeer()
    );
    ll::Global<StructureManager>.init(ll::Global<Minecraft>->getStructureManager().get());
    ll::Global<Level>.init(ll::Global<Minecraft>->getLevel());
    ll::Global<ServerLevel>.init((ServerLevel*)ll::Global<Level>);
    origin(ins);
}

// ServerNetworkHandler
LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerService,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::allowIncomingConnections,
    void,
    std::string const& a1,
    bool               a2
) {
    ll::Global<ServerNetworkHandler>.init(this);
    unhook();
    origin(a1, a2);
}

// AllowListFile
LL_AUTO_TYPED_STATIC_HOOK(
    AllowListFileService,
    HookPriority::High,
    AllowListCommand,
    AllowListCommand::setup,
    void,
    class CommandRegistry& reg,
    class AllowListFile&   file
) {
    ll::Global<AllowListFile>.init(&file);
    origin(reg, file);
}

// PropertiesSettings
LL_AUTO_TYPED_INSTANCE_HOOK(
    PropertiesSettingsService,
    HookPriority::High,
    PropertiesSettings,
    &PropertiesSettings::isPropertiesFileLoaded,
    bool const
) {
    ll::Global<PropertiesSettings>.init(this);
    unhook();
    return origin();
}

// ResourcePackRepository
LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackInitEventHook,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    ll::Global<ResourcePackRepository>.init(this);
    origin();
}

} // namespace
