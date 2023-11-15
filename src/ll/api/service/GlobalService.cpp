#include "ll/api/service/GlobalService.h"

#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakPeerInterface.h"
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

#include "ll/api/base/Hash.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/core/LeviLamina.h"

template <ll::IsGlobalService T>
ll::GlobalService<T>::GlobalService() = default;

template <ll::IsGlobalService T>
void ll::GlobalService<T>::init(T* ptr) {
    value = ptr;
    ll::logger
        .debug("Initializing GlobalService<{}> to 0x{:X}", ll::reflection::type_unprefix_name_v<T>, (size_t)value);
}

namespace {

using namespace ll::memory;

// AllowListFile

LL_AUTO_INSTANCE_HOOK(
    AllowListFileConstructor,
    HookPriority::Low,
    "??0AllowListFile@@QEAA@AEBVPath@Core@@@Z",
    AllowListFile*,
    class Core::Path const& path
) {
    auto self = origin(path);
    ll::Global<AllowListFile>.init(self);
    return self;
}
LL_AUTO_INSTANCE_HOOK(AllowListFileDestructor, HookPriority::Low, "??1AllowListFile@@QEAA@XZ", void) {
    if ((void*)this == (void*)ll::Global<AllowListFile>.get()) ll::Global<AllowListFile>.init(nullptr);
    origin();
}

// StructureManager

LL_AUTO_INSTANCE_HOOK(
    StructureManagerConstructor,
    HookPriority::Low,
    "??0StructureManager@@QEAA@AEAVResourcePackManager@@@Z",
    StructureManager*,
    class ResourcePackManager& resourcePackManager
) {
    auto self = origin(resourcePackManager);
    ll::Global<StructureManager>.init(self);
    return self;
}

// Minecraft

LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftServiceHook,
    HookPriority::Low,
    Minecraft,
    &Minecraft::initAsDedicatedServer,
    void
) {
    ll::Global<Minecraft>.init(this);
    origin();
}
LL_AUTO_INSTANCE_HOOK(MinecraftDestructor, HookPriority::Low, "??1Minecraft@@UEAA@XZ", void) {
    ll::Global<StructureManager>.init(nullptr); // ~StructureManager is inlined
    ll::Global<Minecraft>.init(nullptr);
    origin();
}

// PropertiesSettings

LL_AUTO_INSTANCE_HOOK(
    PropertiesSettingsConstructor,
    HookPriority::Low,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    PropertiesSettings*,
    std::string const& path
) {
    auto self = origin(path);
    ll::Global<PropertiesSettings>.init(self);
    return self;
}
LL_AUTO_STATIC_HOOK(PropertiesSettingsDestructor, HookPriority::Low, "??1PropertiesSettings@@QEAA@XZ", void) {
    ll::Global<PropertiesSettings>.init(nullptr);
    origin();
}

// ServerNetworkHandler

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerServiceHook,
    HookPriority::Low,
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
LL_AUTO_INSTANCE_HOOK(ServerNetworkHandlerDestructor, HookPriority::Low, "??1ServerNetworkHandler@@UEAA@XZ", void) {
    ll::Global<ServerNetworkHandler>.init(nullptr);
    origin();
}

// NetworkSystem

LL_AUTO_INSTANCE_HOOK(
    NetworkSystemConstructor,
    HookPriority::Low,
    "??0NetworkSystem@@IEAA@$$QEAUDependencies@0@@Z",
    NetworkSystem*,
    struct NetworkSystem::Dependencies&& dependencies
) {
    auto self = origin(std::move(dependencies));
    ll::Global<NetworkSystem>.init(self);
    return self;
}
LL_AUTO_INSTANCE_HOOK(NetworkSystemDestructor, HookPriority::Low, "??1NetworkSystem@@MEAA@XZ", void) {
    ll::Global<NetworkSystem>.init(nullptr);
    origin();
}

// Level

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerLevelServiceHook,
    HookPriority::Low,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    ll::Global<Level>.init(ll::Global<Minecraft>->getLevel());
    origin(ins);
}
LL_AUTO_INSTANCE_HOOK(LevelDestructor, HookPriority::Low, "??1Level@@UEAA@XZ", void) {
    ll::Global<Level>.init(nullptr);
    origin();
}

// RakNet::RakPeer

LL_AUTO_STATIC_HOOK(
    RakNetRakPeerCreater,
    HookPriority::Low,
    createUniqueRakPeer,
    RakNet::RakPeerInterface::InstanceOwner
) {
    auto self = origin();
    ll::Global<RakNet::RakPeer>.init((RakNet::RakPeer*)self.get());
    return self;
}
LL_AUTO_INSTANCE_HOOK(RakNetRakPeerDestructor, HookPriority::Low, "??1RakPeer@RakNet@@UEAA@XZ", void) {
    ll::Global<RakNet::RakPeer>.init(nullptr);
    origin();
}

// ResourcePackRepository

LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackRepositoryServiceHook,
    HookPriority::Low,
    ResourcePackRepository,
    &ResourcePackRepository::_initialize,
    void
) {
    ll::Global<ResourcePackRepository>.init(this);
    origin();
}
LL_AUTO_INSTANCE_HOOK(ResourcePackRepositoryDestructor, HookPriority::Low, "??1ResourcePackRepository@@QEAA@XZ", void) {
    ll::Global<ResourcePackRepository>.init(nullptr);
    origin();
}

// CommandRegistry

LL_AUTO_INSTANCE_HOOK(CommandRegistryConstructor, HookPriority::Low, "??0CommandRegistry@@QEAA@XZ", CommandRegistry*) {
    auto self = origin();
    ll::Global<CommandRegistry>.init((CommandRegistry*)this);
    return self;
}
LL_AUTO_INSTANCE_HOOK(CommandRegistryDestructor, HookPriority::Low, "??1CommandRegistry@@QEAA@XZ", void) {
    ll::Global<CommandRegistry>.init(nullptr);
    origin();
}

} // namespace
