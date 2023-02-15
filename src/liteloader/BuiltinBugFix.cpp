#include <unordered_map>

#include "liteloader/Config.h"
#include "liteloader/LiteLoader.h"

#include "llapi/memory/Hook.h"

#include "llapi/mc/InventoryTransactionPacket.hpp"
#include "llapi/mc/NetworkIdentifier.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/ServerPlayer.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/ClientCacheBlobStatusPacket.hpp"
#include "llapi/mc/BinaryStream.hpp"
#include "llapi/mc/LevelData.hpp"
#include "llapi/EventAPI.h"
#include "llapi/mc/NetworkConnection.hpp"

#include "llapi/mc/LevelChunk.hpp"
#include "llapi/mc/ChunkSource.hpp"

#include "llapi/mc/NetworkHandler.hpp"
#include "llapi/mc/NetworkPeer.hpp"
#include "llapi/mc/ReadOnlyBinaryStream.hpp"

#include "llapi/ScheduleAPI.h"

#include "llapi/mc/UpdateAdventureSettingsPacket.hpp"
#include "llapi/mc/UpdateAbilitiesPacket.hpp"
#include "llapi/mc/LayeredAbilities.hpp"
#include "llapi/mc/RequestAbilityPacket.hpp"
#include "llapi/mc/AdventureSettings.hpp"

#include <Windows.h>
using namespace ll;
using namespace ll::memory;

static inline bool checkPktId(unsigned int id) {
    id &= 0x3ff;
    return id == 0 || id == 0x01 || id == 0x5e || id == 0xc1;
}

static inline bool& connState(void* conn) { return *((bool*)conn + 362); }

LL_AUTO_TYPED_INSTANCE_HOOK(
    BultinBugFixHook0,
    NetworkConnection,
    Priority::PriorityNormal,
    "?receivePacket@NetworkConnection@@QEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$"
    "allocator@D@2@@std@@AEAVNetworkHandler@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_"
    "JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z",
    NetworkPeer::DataStatus,
    string*   data,
    __int64   a3,
    __int64** a4
) {
    auto status = origin(data, a3, a4);
    if (status == NetworkPeer::DataStatus::HasData) {
        auto stream   = ReadOnlyBinaryStream(*data, false);
        auto packetId = stream.getUnsignedVarInt();
        if (packetId == 0) {
            data->clear();
            return NetworkPeer::DataStatus::NoData;
        }
        if (!data->empty()) {
            if (checkPktId(packetId)) {
                connState(this) = true;
            } else {
                if (!connState(this)) {
                    data->clear();
                    return NetworkPeer::DataStatus::NoData;
                }
            }
        }
    }
    return status;
}

LL_AUTO_STATIC_HOOK(
    Hook1,
    ll::memory::Priority::PriorityNormal,
    "??0NetworkConnection@@QEAA@AEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@V?$time_point@Usteady_clock@"
    "chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@3@_NV?$NonOwnerPointer@VIPacketObserver@@@"
    "Bedrock@@AEAVScheduler@@@Z",
    void*,
    void* thi,
    void* a1,
    void* a2,
    void* a3,
    void* a4,
    void* a5,
    void* a6,
    void* a7
) {
    auto res       = origin(thi, a1, a2, a3, a4, a5, a6, a7);
    connState(thi) = false;
    return res;
}

// Fix wine stop
LL_AUTO_INSTANCE_HOOK(Hook2, ll::memory::Priority::PriorityNormal, "?leaveGameSync@ServerInstance@@QEAAXXZ", void, ) {
    origin();
    if (IsWineEnvironment()) {
        std::cerr << "Quit correctly" << std::endl;
        auto proc = GetCurrentProcess();
        TerminateProcess(proc, 0);
    }
}

LL_AUTO_INSTANCE_HOOK(
    Hook3,
    ll::memory::Priority::PriorityNormal,
    "?Startup@RakPeer@RakNet@@UEAA?AW4StartupResult@2@IPEAUSocketDescriptor@2@IH@Z",
    enum StartupResult,
    unsigned int            maxConnections,
    class SocketDescriptor* socketDescriptors,
    unsigned                socketDescriptorCount,
    int                     threadPriority
) {
    if (maxConnections > 0xFFFF) {
        maxConnections = 0xFFFF;
    }
    return origin(maxConnections, socketDescriptors, socketDescriptorCount, threadPriority);
}

// Fix command crash when server is stopping
LL_AUTO_INSTANCE_HOOK(
    Hook4,
    ll::memory::Priority::PriorityNormal,
    "?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
    "allocator@D@2@@std@@000@Z",
    void,
    std::string const& a1,
    std::string const& a2,
    std::string const& a3,
    std::string const& a4
) {
    if (ll::isServerStopping())
        return;
    origin(a1, a2, a3, a4);
}

LL_AUTO_INSTANCE_HOOK(
    Hook5,
    ll::memory::Priority::PriorityNormal,
    "?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z",
    void,
    class Player& a1
) {
    if (ll::isServerStopping())
        return;
    origin(a1);
}

LL_AUTO_INSTANCE_HOOK(
    Hook6,
    ll::memory::Priority::PriorityNormal,
    "?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z",
    void,
    class Player& a1,
    float         a2
) {
    if (ll::isServerStopping())
        return;
    origin(a1, a2);
}

LL_AUTO_INSTANCE_HOOK(
    Hook7,
    ll::memory::Priority::PriorityNormal,
    "?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z",
    void,
    class Player* a1,
    float         a2,
    int           a3,
    int           a4
) {
    if (ll::isServerStopping())
        return;
    origin(a1, a2, a3, a4);
}

// Set stdin mode to text mode if in wine environment
inline bool tryFixConsoleInputMode() {
    if ((ll::globalConfig.enableFixMcBug && IsWineEnvironment()) || ll::globalConfig.enableForceUtf8Input) {
        int result = _setmode(_fileno(stdin), _O_U8TEXT);
        if (result == -1) {
            logger.error("Cannot set stdin to utf8 text mode");
            return false;
        }
        return true;
    }
    return true;
}

// Fix wine console input
LL_AUTO_STATIC_HOOK(
    Hook8,
    ll::memory::Priority::PriorityNormal,
    "??$getline@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@$$"
    "QEAV10@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@_W@Z",
    std::wistream&,
    std::wistream&& ret,
    std::wstring&   a1,
    wchar_t         a2
) {
    if (&ret == &std::wcin) {
        static bool fixed = tryFixConsoleInputMode();
    }
    return origin(std::move(ret), a1, a2);
}

// Fix server broadcast bug.
LL_AUTO_TYPED_INSTANCE_HOOK(
    FixBroadcastBug,
    LevelData,
    Priority::PriorityNormal,
    "??0LevelData@@QEAA@AEBVLevelSettings@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
    "W4GeneratorType@@AEBVBlockPos@@_NW4EducationEditionOffer@@MM@Z",
    LevelData*,
    void*        a2,
    __int64      a3,
    unsigned int a4,
    BlockPos*    a5,
    char         a6,
    int          a7,
    int          a8,
    int          a9
) {
    if (ll::globalConfig.enableFixBroadcastBug) {
        auto data = origin(a2, a3, a4, a5, a6, a7, a8, a9);
        data->setLANBroadcast(true);
        data->setLANBroadcastIntent(true);
        return data;
    }
    return origin(a2, a3, a4, a5, a6, a7, a8, a9);
}

// Disable 'Running AutoCompaction...' log.
bool pauseBLogging = false;

LL_AUTO_STATIC_HOOK(
    Hook9,
    ll::memory::Priority::PriorityNormal,
    "std::_Func_impl_no_alloc<<lambda_2166e5158bf5234f43e997b0cbaf4395>,TaskResult>::_Do_call",
    __int64,
    __int64 a1,
    __int64 a2
) {
    if (ll::globalConfig.disableAutoCompactionLog) {
        pauseBLogging = true;
        auto v        = origin(a1, a2);
        pauseBLogging = false;
        return v;
    }
    return origin(a1, a2);
}

LL_AUTO_INSTANCE_HOOK(
    Hook10,
    ll::memory::Priority::PriorityNormal,
    "?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z",
    char,
    char         a2,
    int          a3,
    int          a4,
    unsigned int a5,
    __int64      a6,
    int          a7,
    __int64      a8,
    __int64      a9
) {
    if (ll::globalConfig.disableAutoCompactionLog && pauseBLogging) {
        return 0;
    }
    return origin(a2, a3, a4, a5, a6, a7, a8, a9);
}

// Try Fix BDS Crash
// Beta

LL_AUTO_STATIC_HOOK(
    Hook11,
    ll::memory::Priority::PriorityNormal,
    "??0ScopedTimer@ImguiProfiler@@QEAA@PEBD0_N@Z",
    void*,
    void* self,
    char* a2,
    char* a3,
    char  a4
) {
    if (ll::globalConfig.enableFixBDSCrash) {
        return nullptr;
    }
    return origin(self, a2, a3, a4);
}

LL_AUTO_STATIC_HOOK(
    Hook12,
    ll::memory::Priority::PriorityNormal,
    "??1ScopedTimer@ImguiProfiler@@UEAA@XZ",
    void,
    void* self
) {
    if (ll::globalConfig.enableFixBDSCrash) {
        return;
    }
    return origin(self);
}

LL_AUTO_STATIC_HOOK(
    Hook13,
    ll::memory::Priority::PriorityNormal,
    "?getChunk@BlockSource@@QEBAPEAVLevelChunk@@AEBVChunkPos@@@Z",
    LevelChunk*,
    BlockSource* self,
    ChunkPos*    a2
) {
    if (ll::globalConfig.enableFixBDSCrash) {
        LevelChunk* ptr = nullptr;
        try {
            ptr = origin(self, a2);
        } catch (...) {
            return nullptr;
        }
        return ptr;
    }
    return origin(self, a2);
}

#include "llapi/mc/Level.hpp"

LL_AUTO_TYPED_INSTANCE_HOOK(FixBlockSourceCrash, Actor, Priority::PriorityNormal, "?getRegionConst@Actor@@QEBAAEBVBlockSource@@XZ", BlockSource*) {
    auto bs = origin();
    if (ll::globalConfig.enableFixBDSCrash) {
        if (!bs) {
            return Level::getBlockSource(getDimensionId());
        }
    }
    return bs;
}

// From https://github.com/dreamguxiang/BETweaker
enum class AbilitiesLayer;
enum class SubClientId;
LL_AUTO_TYPED_INSTANCE_HOOK(
    FixAbility,
    ServerNetworkHandler,
    Priority::PriorityNormal,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z",
    void,
    class NetworkIdentifier const&    nid,
    class RequestAbilityPacket const& pkt
) {
    origin(nid, pkt);
    if (ll::globalConfig.enableFixAbility) {
        auto index = pkt.getAbility();
        if (index == AbilitiesIndex::Flying) {
            auto sp = getServerPlayer(nid, pkt.clientSubId);
            if (!sp)
                return;
            if (!sp->getUserEntityIdentifierComponent())
                return;
            bool flying;
            if (!pkt.tryGetBool(flying))
                return;
            auto abilities = sp->getAbilities();
            auto mayFly    = abilities->getAbility(AbilitiesIndex::MayFly).getBool();
            flying         = flying && mayFly;
            Ability& ab    = abilities->getAbility(AbilitiesLayer(1), AbilitiesIndex::Flying);
            ab.setBool(0);
            if (flying)
                ab.setBool(1);
            UpdateAbilitiesPacket packet(sp->getUniqueID(), *abilities);
            auto                  pkt2 = UpdateAdventureSettingsPacket(AdventureSettings());
            abilities->setAbility(AbilitiesIndex::Flying, flying);
            sp->sendNetworkPacket(pkt2);
            sp->sendNetworkPacket(packet);
        }
    }
}
