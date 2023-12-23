#define LL_GLOBAL_SERVICE_IMPL

#include "ll/api/service/GlobalService.h"

#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/entity/systems/common/EntitySystemsCollection.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/RakNetConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/server/ServerLevel.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/server/common/commands/AllowListCommand.h"
#include "mc/world/Minecraft.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/base/Hash.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/core/LeviLamina.h"

template <ll::IsGlobalService T>
ll::GlobalService<T>::GlobalService() = default;

template <ll::IsGlobalService T>
void ll::GlobalService<T>::init(T* ptr) {
    value = ptr;
#if defined(LL_DEBUG)
    ll::logger
        .debug("Initializing GlobalService<{}> to 0x{:X}", ll::reflection::type_unprefix_name_v<T>, (size_t)value);
#endif
}

namespace ll {

using namespace memory;

// Minecraft

LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftServiceHook,
    HookPriority::High,
    Minecraft,
    &Minecraft::initAsDedicatedServer,
    void
) {
    ll::Global<Minecraft>.init(this);
    origin();
}
LL_AUTO_INSTANCE_HOOK(MinecraftDestructor, HookPriority::High, "??1Minecraft@@UEAA@XZ", void) {
    ll::Global<Minecraft>.init(nullptr);
    origin();
}

// PropertiesSettings

LL_AUTO_INSTANCE_HOOK(
    PropertiesSettingsConstructor,
    HookPriority::High,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    PropertiesSettings*,
    std::string const& path
) {
    auto self = origin(path);
    ll::Global<PropertiesSettings>.init(self);
    return self;
}
LL_AUTO_INSTANCE_HOOK(PropertiesSettingsDestructor, HookPriority::High, "??1PropertiesSettings@@QEAA@XZ", void) {
    ll::Global<PropertiesSettings>.init(nullptr);
    origin();
}

// ServerNetworkHandler

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
LL_AUTO_INSTANCE_HOOK(ServerNetworkHandlerDestructor, HookPriority::High, "??1ServerNetworkHandler@@UEAA@XZ", void) {
    ll::Global<ServerNetworkHandler>.init(nullptr);
    origin();
}

// NetworkSystem

LL_AUTO_INSTANCE_HOOK(
    NetworkSystemConstructor,
    HookPriority::High,
    "??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z",
    NetworkSystem*,
    struct NetworkSystem::Dependencies&& dependencies
) {
    auto self = origin(std::move(dependencies));
    ll::Global<NetworkSystem>.init(self);
    return self;
}
LL_AUTO_INSTANCE_HOOK(NetworkSystemDestructor, HookPriority::High, "??1NetworkSystem@@MEAA@XZ", void) {
    ll::Global<NetworkSystem>.init(nullptr);
    origin();
}

// Level

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerLevelServiceHook,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    ll::Global<Level>.init(ll::Global<Minecraft>->getLevel());
    origin(ins);
}
LL_AUTO_INSTANCE_HOOK(LevelDestructor, HookPriority::High, "??1Level@@UEAA@XZ", void) {
    ll::Global<Level>.init(nullptr);
    origin();
}

// RakNet::RakPeer

LL_AUTO_INSTANCE_HOOK(RakNetRakPeerConstructor, HookPriority::High, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer*) {
    auto self = origin();
    ll::Global<RakNet::RakPeer>.init(self);
    unhook();
    return self;
}
LL_AUTO_INSTANCE_HOOK(RakNetRakPeerDestructor, HookPriority::High, "??1RakPeer@RakNet@@UEAA@XZ", void) {
    if ((void*)this == (void*)ll::Global<RakNet::RakPeer>.get()) ll::Global<RakNet::RakPeer>.init(nullptr);
    origin();
}

// ResourcePackRepository

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
LL_AUTO_INSTANCE_HOOK(
    ResourcePackRepositoryDestructor,
    HookPriority::High,
    "??1ResourcePackRepository@@QEAA@XZ",
    void
) {
    ll::Global<ResourcePackRepository>.init(nullptr);
    origin();
}

// CommandRegistry

LL_AUTO_INSTANCE_HOOK(CommandRegistryConstructor, HookPriority::High, "??0CommandRegistry@@QEAA@XZ", CommandRegistry*) {
    auto self = origin();
    ll::Global<CommandRegistry>.init((CommandRegistry*)this);
    return self;
}
LL_AUTO_INSTANCE_HOOK(CommandRegistryDestructor, HookPriority::High, "??1CommandRegistry@@QEAA@XZ", void) {
    ll::Global<CommandRegistry>.init(nullptr);
    origin();
}
} // namespace ll
