#include "ll/api/service/GlobalService.h"

#include "mc/deps/raknet/RakPeer.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/AllowListFile.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/server/common/commands/AllowListCommand.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
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

LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftServiceHook,
    HookPriority::High,
    Minecraft,
    &Minecraft::initAsDedicatedServer,
    void
) {
    ll::Global<Minecraft>.init(this);
    origin();
    ll::Global<CommandRegistry>.init(&getCommands().getRegistry());
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerLevelServiceHook,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    ll::Global<StructureManager>.init(ll::Global<Minecraft>->getStructureManager().get());
    ll::Global<Level>.init(ll::Global<Minecraft>->getLevel());
    ll::Global<ServerLevel>.init((ServerLevel*)ll::Global<Level>);
    origin(ins);
    ll::Global<NetworkSystem>.init(
        // offset from ida ServerNetworkSystem::~ServerNetworkSystem
        &ll::memory::dAccess<NetworkSystem>(&ll::Global<Minecraft>->getServerNetworkSystem(), 24)
    );
    ll::Global<RakNet::RakPeer>.init(
        (RakNet::RakPeer*)((RakNetConnector&)(*ll::Global<NetworkSystem>->getRemoteConnector())).getPeer()
    );
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerServiceHook,
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

LL_AUTO_TYPED_STATIC_HOOK(
    AllowListFileServiceHook,
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

LL_AUTO_TYPED_INSTANCE_HOOK(
    PropertiesSettingsServiceHook,
    HookPriority::High,
    PropertiesSettings,
    &PropertiesSettings::isPropertiesFileLoaded,
    bool const
) {
    ll::Global<PropertiesSettings>.init(this);
    unhook();
    return origin();
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackRepositoryServiceHook,
    HookPriority::High,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    ll::Global<ResourcePackRepository>.init(this);
    origin();
}

} // namespace
