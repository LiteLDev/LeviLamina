#include <unordered_map>

#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"

#include "liteloader/api/ScheduleAPI.h"
#include "liteloader/api/event/LegacyEvents.h"
#include "mc/AdventureSettings.hpp"
#include "mc/BinaryStream.hpp"
#include "mc/ChunkSource.hpp"
#include "mc/ChunkViewSource.hpp"
#include "mc/ClientCacheBlobStatusPacket.hpp"
#include "mc/InventoryTransactionPacket.hpp"
#include "mc/LayeredAbilities.hpp"
#include "mc/LevelChunk.hpp"
#include "mc/LevelData.hpp"
#include "mc/MobEquipmentPacket.hpp"
#include "mc/NetworkConnection.hpp"
#include "mc/NetworkHandler.hpp"
#include "mc/NetworkIdentifier.hpp"
#include "mc/NetworkPeer.hpp"
#include "mc/Player.hpp"
#include "mc/ReadOnlyBinaryStream.hpp"
#include "mc/RequestAbilityPacket.hpp"
#include "mc/ServerNetworkHandler.hpp"
#include "mc/ServerPlayer.hpp"
#include "mc/SimulatedPlayer.hpp"
#include "mc/UpdateAbilitiesPacket.hpp"
#include "mc/UpdateAdventureSettingsPacket.hpp"
#include "liteloader/api/memory/Hook.h"

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
    HookPriority::Normal,
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
    HookPriority::Normal,
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
LL_AUTO_INSTANCE_HOOK(Hook2, HookPriority::Normal, "?leaveGameSync@ServerInstance@@QEAAXXZ", void, ) {
    origin();
    if (IsWineEnvironment()) {
        std::cerr << "Quit correctly" << std::endl;
        auto proc = GetCurrentProcess();
        TerminateProcess(proc, 0);
    }
}

LL_AUTO_INSTANCE_HOOK(
    Hook3,
    HookPriority::Normal,
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
    HookPriority::Normal,
    "?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
    "allocator@D@2@@std@@000@Z",
    void,
    std::string const& a1,
    std::string const& a2,
    std::string const& a3,
    std::string const& a4
) {
    if (ll::globalConfig.enableFixBDSCrash && ll::isServerStopping())
        return;
    origin(a1, a2, a3, a4);
}

LL_AUTO_INSTANCE_HOOK(
    Hook5,
    HookPriority::Normal,
    "?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z",
    void,
    class Player& a1
) {
    if (ll::globalConfig.enableFixBDSCrash && ll::isServerStopping())
        return;
    origin(a1);
}

LL_AUTO_INSTANCE_HOOK(
    Hook6,
    HookPriority::Normal,
    "?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z",
    void,
    class Player& a1,
    float         a2
) {
    if (ll::globalConfig.enableFixBDSCrash && ll::isServerStopping())
        return;
    origin(a1, a2);
}

LL_AUTO_INSTANCE_HOOK(
    Hook7,
    HookPriority::Normal,
    "?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z",
    void,
    class Player* a1,
    float         a2,
    int           a3,
    int           a4
) {
    if (ll::globalConfig.enableFixBDSCrash && ll::isServerStopping())
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
    HookPriority::Normal,
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
    HookPriority::Normal,
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
    HookPriority::Normal,
    "std::_Func_impl_no_alloc<<lambda_2381ef31a87ebf59a36ffb68603804e4>,TaskResult>::_Do_call",
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
    HookPriority::Normal,
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
    HookPriority::Normal,
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

LL_AUTO_STATIC_HOOK(Hook12, HookPriority::Normal, "??1ScopedTimer@ImguiProfiler@@UEAA@XZ", void, void* self) {
    if (ll::globalConfig.enableFixBDSCrash) {
        return;
    }
    return origin(self);
}

LL_AUTO_STATIC_HOOK(
    Hook13,
    HookPriority::Normal,
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

#include "mc/Level.hpp"

LL_AUTO_TYPED_INSTANCE_HOOK(FixBlockSourceCrash, Actor, HookPriority::Normal, "?getDimensionBlockSourceConst@Actor@@QEBAAEBVBlockSource@@XZ", BlockSource*) {
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
    HookPriority::Normal,
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
            auto& abilities = sp->getAbilities();
            auto  mayFly    = abilities.getAbility(AbilitiesIndex::MayFly).getBool();
            flying          = flying && mayFly;
            Ability& ab     = abilities.getAbility(AbilitiesLayer(1), AbilitiesIndex::Flying);
            ab.setBool(0);
            if (flying)
                ab.setBool(1);
            UpdateAbilitiesPacket packet(sp->getUniqueID(), abilities);
            auto                  pkt2 = UpdateAdventureSettingsPacket(AdventureSettings());
            abilities.setAbility(AbilitiesIndex::Flying, flying);
            sp->sendNetworkPacket(pkt2);
            sp->sendNetworkPacket(packet);
        }
    }
}

// Fix SimulatedPlayer Bugs
namespace SimulatedPlayerClient {
template <typename T>
void send(Player* sp, T& packet) {
    packet.clientSubId            = sp->getClientSubId();
    ServerNetworkHandler* handler = Global<ServerNetworkHandler> + 16;
    handler->handle(*sp->getNetworkIdentifier(), packet);
}
} // namespace SimulatedPlayerClient

LL_AUTO_TYPED_INSTANCE_HOOK(
    TickWorldHook,
    Player,
    HookPriority::Normal,
    "?tickWorld@Player@@UEAAXAEBUTick@@@Z",
    void,
    struct Tick const& tick
) {
    origin(tick);

    //  _updateChunkPublisherView will be called after Player::tick in ServerPlayer::tick
    if (isSimulatedPlayer()) {
        // Force to call the implementation of ServerPlayer
        ((ServerPlayer*)this)
            ->_updateChunkPublisherView(getPos(), 16.0f * Global<PropertiesSettings>->getServerTickRange());
    }
}

// fix chunk load and tick - ChunkSource load mode
static_assert(sizeof(ChunkSource) == 0x50);      // 88
static_assert(sizeof(ChunkViewSource) == 0x1d8); // 472

LL_AUTO_TYPED_INSTANCE_HOOK(
    FixChunkSourceHook,
    SimulatedPlayer,
    HookPriority::Normal,
    "?_createChunkSource@SimulatedPlayer@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z",
    std::shared_ptr<class ChunkViewSource>,
    ChunkSource& chunkSource
) {
    auto result = ChunkViewSource(chunkSource, ChunkSource::LoadMode::Deferred);
    return std::make_shared<ChunkViewSource>(result);
}

// fix carried item display
// fix armor display
#include "mc/WeakEntityRef.hpp"
#include "mc/WeakStorageEntity.hpp"
// void sendEvent(class EventRef<struct ActorGameplayEvent<void>> const &);
LL_AUTO_INSTANCE_HOOK(
    ActorEventCoordinatorSendEventHook,
    HookPriority::Normal,
    "?sendEvent@ActorEventCoordinator@@QEAAXAEBV?$EventRef@U?$ActorGameplayEvent@X@@@@@Z",
    void,
    void* a2
) {
    origin(a2);
    if (a2) {
        auto type = dAccess<char, 312>(a2);
        // sendActorCarriedItemChanged
        if (type == 4) {
            auto               v56 = dAccess<char, 304>(a2);
            WeakStorageEntity* v59;
            if (v56) {
                if (v56 != 1) {
                    return;
                }
                v59 = (WeakStorageEntity*)a2;
            } else {
                v59 = *(WeakStorageEntity**)a2;
            }
            if (v59) {
                Actor* actor =
                    LL_SYMBOL_CALL("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ", Actor*, WeakStorageEntity*)(
                        v59
                    );
                if (actor->isSimulatedPlayer()) {
                    ItemInstance const& newItem = dAccess<ItemInstance, 160>(v59);
                    int                 slot    = dAccess<int, 296>(v59);
                    // Force to call the implementation of ServerPlayer
                    MobEquipmentPacket pkt(
                        actor->getRuntimeID(), newItem, (int)slot, (int)slot, ContainerID::Inventory
                    );
                    SimulatedPlayerClient::send((SimulatedPlayer*)actor, pkt);
                }
            }
        }
        // sendActorEquippedArmor
        else if (type == 8) {
            auto               v30 = dAccess<char, 168>(a2);
            WeakStorageEntity* v31;
            if (v30) {
                if (v30 != 1) {
                    return;
                }
                v31 = (WeakStorageEntity*)a2;
            } else {
                v31 = *(WeakStorageEntity**)a2;
            }
            if (v31) {
                Actor* actor =
                    LL_SYMBOL_CALL("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ", Actor*, WeakStorageEntity*)(
                        v31
                    );
                if (actor->isSimulatedPlayer()) {
                    int                 slot = dAccess<int, 160>(v31);
                    ItemInstance const& item = dAccess<ItemInstance, 24>(v31);
                    // Force to call the implementation of ServerPlayer
                    MobEquipmentPacket pkt(actor->getRuntimeID(), item, (int)slot, (int)slot, ContainerID::Armor);
                    SimulatedPlayerClient::send((SimulatedPlayer*)actor, pkt);
                }
            }
        }
    }
}
