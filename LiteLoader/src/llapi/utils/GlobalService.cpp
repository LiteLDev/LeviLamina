#include "llapi/Global.h"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Minecraft.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/MinecraftCommands.hpp"
#include "llapi/mc/DBStorage.hpp"
#include "llapi/mc/RakNetServerLocator.hpp"
#include "llapi/mc/RakNet.hpp"
#include "llapi/mc/Scoreboard.hpp"
#include "llapi/mc/AllowListFile.hpp"
#include "llapi/GlobalServiceAPI.h"
#include <libloaderapi.h>

// Minecraft
TInstanceHook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft) {
    Global<Minecraft> = this;
    original(this);
}
// ServerNetworkHandler
TInstanceHook(void, "?allowIncomingConnections@ServerNetworkHandler@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z",
              ServerNetworkHandler, std::string const& a1, bool a2) {
    static bool initd = false;
    if (!initd) {
        initd = true;
        // auto v3 = (ServerNetworkHandler*)((char*)this + 16);
        // +16 cause fetchConnectionRequest returns nullptr
        Global<ServerNetworkHandler> = this;
    }
    original(this, a1, a2);
}

// TInstanceHook(ServerNetworkHandler*, "??0ServerNetworkHandler@@QEAA@AEAVGameCallbacks@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEAVNetworkHandler@@AEAVPrivateKeyManager@@AEAVServerLocator@@AEAVPacketSender@@AEAVAllowList@@PEAVPermissionsFile@@AEBVUUID@mce@@H_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVMinecraftCommands@@AEAVIMinecraftApp@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEAVScheduler@@V?$NonOwnerPointer@VTextFilteringProcessor@@@3@@Z",
//               ServerNetworkHandler, class GameCallbacks& a1, class Bedrock::NonOwnerPointer<class ILevel> const& a2, class NetworkHandler& a3, class PrivateKeyManager& a4, class ServerLocator& a5, class PacketSender& a6, class AllowList& a7, class PermissionsFile* a8, class mce::UUID const& a9, int a10, bool a11, std::vector<std::string> const& a12, std::string a13, int a14, class MinecraftCommands& a15, class IMinecraftApp& a16, class std::unordered_map<struct PackIdVersion, std::string> const& a17, class Scheduler& a18, class Bedrock::NonOwnerPointer<class TextFilteringProcessor> a19)
//{
//     auto rtn = original(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
//     Global<ServerNetworkHandler> = this;
//     //Global<NetworkHandler> = &a3;
//     Global<MinecraftCommands> = &a15;
//     return rtn;
// }

// MinecraftCommands
TInstanceHook(void,
              "?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@"
              "@AEBVExperiments@@AEBVBaseGameVersion@@@Z",
              MinecraftCommands, void* a2, __int64 a3, __int64 a4, void* a5, void* a6) {
    original(this, a2, a3, a4, a5, a6);
    Global<MinecraftCommands> = this;
}

// LevelStorage & DBStorage
TInstanceHook(DBStorage*, "??0DBStorage@@QEAA@UDBStorageConfig@@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@gsl@@@Z",
              DBStorage, struct DBStorageConfig* config, void* a3) {
    auto ret = original(this, config, a3);
    Global<LevelStorage> = (LevelStorage*)this;
    Global<DBStorage> = this;
    return ret;
}

#if 0
// ChunkSource
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2)
{
    Global<ChunkSource> = a1);
    return original(a1, a2);
}
#endif

// RakNetServerLocator
// ?activate@RakNetServerLocator@@AEAAXXZ
TInstanceHook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator) {
    constexpr auto h = do_hash("?_activate@RakNetServerLocator@@AEAAXXZ");
    static bool set = false;
    if (!set) {
        set = true;
        Global<RakNetServerLocator> = this;
    }
    return original(this);
}
// RakNet::RakPeer
TInstanceHook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer) {
    static bool set = false;
    if (!set) {
        set = true;
        Global<RakNet::RakPeer> = this;
    }
    return original(this);
}
// Scoreboard
#include "llapi/mc/CommandSoftEnumRegistry.hpp"
TInstanceHook(Scoreboard*, "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
              Scoreboard, void** a2, class LevelStorage* a3) {
    Scoreboard* sc = original(this, a2, a3);
    Global<Scoreboard> = sc;
    return sc;
}
// AllowListFile
TInstanceHook(int, "?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ", AllowListFile) {
    static bool set = false;
    if (!set) {
        Global<AllowListFile> = this;
        set = true;
    }
    return original(this);
}
// PropertiesSettings
// -> BuiltinBugFix.cpp
