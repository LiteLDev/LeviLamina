#include "liteloader/api/service/GlobalService.h"

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

#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/utils/Hash.h"
#include "liteloader/core/LiteLoader.h"

template <ll::IsGlobalService T>
ll::GlobalService<T>::GlobalService() = default;

template <ll::IsGlobalService T>
void ll::GlobalService<T>::init(T* ptr) {
    value = ptr;
}

namespace {

using namespace ll::memory;

// Minecraft
LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftService,
    Minecraft,
    HookPriority::Normal,
    &Minecraft::initAsDedicatedServer,
    void
) {
    ll::logger.info("MinecraftService: {}", (uintptr_t)this);
    ll::Global<Minecraft>.init(this);
    origin();
    ll::Global<CommandRegistry>.init(&getCommands().getRegistry());
    ll::Global<RakNet::RakPeer>.init(
        (RakNet::RakPeer*)((RakNetConnector&)(*getNetworkSystem().getRemoteConnector())).getPeer()
    );
}

// ServerLevel
LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    ServerInstanceEventCoordinator,
    ll::memory::HookPriority::Normal,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    ll::logger.info("ServerStartedEventHook: {}", (uintptr_t)ll::Global<Minecraft>.get());
    ll::Global<Level>.init(ll::Global<Minecraft>->getLevel());
    ll::Global<ServerLevel>.init((ServerLevel*)ll::Global<Level>.get());

    origin(ins);
}

// ServerNetworkHandler
LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerService,
    ServerNetworkHandler,
    HookPriority::Normal,
    &ServerNetworkHandler::allowIncomingConnections,
    void,
    std::string const& a1,
    bool               a2
) {
    static bool initd = false;
    if (!initd) {
        initd = true;
        ll::Global<ServerNetworkHandler>.init(this);
    }
    origin(a1, a2);
}

// AllowListFile
LL_AUTO_TYPED_STATIC_HOOK(
    AllowListFileService,
    HookPriority::Normal,
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
    PropertiesSettings,
    HookPriority::Normal,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    size_t,
    const std::string& file
) {
    ll::Global<PropertiesSettings>.init(this);
    return origin(file);
}

// ResourcePackRepository
LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePackInitEventHook,
    ResourcePackRepository,
    ll::memory::HookPriority::Normal,
    &ResourcePackRepository::_initialize,
    void
) {
    ll::Global<ResourcePackRepository>.init(this);
    origin();
}

} // namespace

// fixme: remove or implement
template class ll::GlobalService<StructureManager>;
