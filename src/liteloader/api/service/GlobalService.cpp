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

namespace {

template <ll::IsGlobalService T>
inline void initGlobalService(T* ptr) {
    *const_cast<T**>(&ll::Global<T>) = ptr;
}

using namespace ll::memory;

// Minecraft
LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftService,
    Minecraft,
    HookPriority::Normal,
    &Minecraft::initAsDedicatedServer,
    void
) {
    origin();
    initGlobalService<Minecraft>(this);
    initGlobalService<CommandRegistry>(&getCommands().getRegistry());
    initGlobalService<RakNet::RakPeer>(
        (RakNet::RakPeer*)(((RakNetConnector&)(*getNetworkSystem().getRemoteConnector())).getPeer())
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
    initGlobalService<Level>(ll::Global<Minecraft>->getLevel());
    initGlobalService<ServerLevel>((ServerLevel*)ll::Global<Level>);

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
        initGlobalService<ServerNetworkHandler>(this);
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
    initGlobalService<AllowListFile>(&file);
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
    initGlobalService<PropertiesSettings>(this);
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
    initGlobalService<ResourcePackRepository>(this);
    origin();
}

} // namespace
