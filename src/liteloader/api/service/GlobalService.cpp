#include "liteloader/api/service/GlobalService.h"

#include "mc/common/SharedConstants.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/network/RakNetServerLocator.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/common/AllowListFile.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/scores/Scoreboard.h"


#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/utils/Hash.h"

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
    "?initAsDedicatedServer@Minecraft@@QEAAXXZ",
    void
) {
    initGlobalService<Minecraft>(this);
    origin();
}

// ServerNetworkHandler
LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerNetworkHandlerService,
    ServerNetworkHandler,
    HookPriority::Normal,
    "?allowIncomingConnections@ServerNetworkHandler@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
    "std@@_N@Z",
    void,
    std::string const& a1,
    bool               a2
) {
    static bool initd = false;
    if (!initd) {
        initd = true;
        // auto v3 = (ServerNetworkHandler*)((char*)this + 16);
        // +16 cause fetchConnectionRequest returns nullptr
        initGlobalService<ServerNetworkHandler>(this);
    }
    origin(a1, a2);
}

// TInstanceHook(ServerNetworkHandler*,
// "??0ServerNetworkHandler@@QEAA@AEAVGameCallbacks@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEAVNetworkHandler@@AEAVPrivateKeyManager@@AEAVServerLocator@@AEAVPacketSender@@AEAVAllowList@@PEAVPermissionsFile@@AEBVUUID@mce@@H_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVMinecraftCommands@@AEAVIMinecraftApp@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEAVScheduler@@V?$NonOwnerPointer@VTextFilteringProcessor@@@3@@Z",
//               ServerNetworkHandler, class GameCallbacks& a1, class Bedrock::NonOwnerPointer<class ILevel> const& a2,
//               class NetworkHandler& a3, class PrivateKeyManager& a4, class ServerLocator& a5, class PacketSender& a6,
//               class AllowList& a7, class PermissionsFile* a8, class mce::UUID const& a9, int a10, bool a11,
//               std::vector<std::string> const& a12, std::string a13, int a14, class MinecraftCommands& a15, class
//               IMinecraftApp& a16, class std::unordered_map<struct PackIdVersion, std::string> const& a17, class
//               Scheduler& a18, class Bedrock::NonOwnerPointer<class TextFilteringProcessor> a19)
//{
//     auto rtn = origin( a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
//     Global<ServerNetworkHandler> = this;
//     //Global<NetworkHandler> = &a3;
//     Global<MinecraftCommands> = &a15;
//     return rtn;
// }

// MinecraftCommands
LL_AUTO_TYPED_INSTANCE_HOOK(
    MinecraftCommandsService,
    MinecraftCommands,
    HookPriority::Normal,
    "?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@"
    "@AEBVExperiments@@AEBVBaseGameVersion@@@Z",
    void,
    void* a2,
    int64 a3,
    int64 a4,
    void* a5,
    void* a6
) {
    origin(a2, a3, a4, a5, a6);
    initGlobalService<MinecraftCommands>(this);
}

// LevelStorage & DBStorage
LL_AUTO_TYPED_INSTANCE_HOOK(
    LevelStorageService,
    DBStorage,
    HookPriority::Normal,
    "??0DBStorage@@QEAA@UDBStorageConfig@@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@gsl@@@Z",
    DBStorage*,
    struct DBStorageConfig* config,
    void*                   a3
) {
    auto ret = origin(config, a3);
    initGlobalService<LevelStorage>(this);
    initGlobalService<DBStorage>(this);
    return ret;
}

// RakNetServerLocator
// ?activate@RakNetServerLocator@@AEAAXXZ
LL_AUTO_TYPED_INSTANCE_HOOK(RakNetServerLocatorService, RakNetServerLocator, HookPriority::Normal, "?_activate@RakNetServerLocator@@AEAAXXZ", void*) {
    static bool set = false;
    if (!set) {
        set = true;
        initGlobalService<RakNetServerLocator>(this);
    }
    return origin();
}

using RakNet::RakPeer;
LL_AUTO_TYPED_INSTANCE_HOOK(RakPeerService, RakPeer, HookPriority::Normal, "??0RakPeer@RakNet@@QEAA@XZ", void*) {
    static bool set = false;
    if (!set) {
        set = true;
        initGlobalService<RakPeer>(this);
    }
    return origin();
}

// Scoreboard
LL_AUTO_TYPED_INSTANCE_HOOK(
    ScoreboardService,
    Scoreboard,
    HookPriority::Normal,
    "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
    Scoreboard*,
    void**              a2,
    class LevelStorage* a3
) {
    Scoreboard* sc = origin(a2, a3);
    initGlobalService<Scoreboard>(sc);
    return sc;
}

// AllowListFile
LL_AUTO_TYPED_INSTANCE_HOOK(
    AllowListFileService,
    AllowListFile,
    HookPriority::Normal,
    "?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ",
    int
) {
    static bool set = false;
    if (!set) {
        initGlobalService<AllowListFile>(this);
        set = true;
    }
    return origin();
}

// PropertiesSettings
LL_AUTO_TYPED_INSTANCE_HOOK(
    UnBindDefaultPort,
    PropertiesSettings,
    HookPriority::Normal,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    size_t,
    const std::string& file
) {
    initGlobalService<PropertiesSettings>(this);
    return origin(file);
}

} // namespace
