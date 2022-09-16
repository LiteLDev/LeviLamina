#include <unordered_map>

#include <liteloader/Config.h>
#include <liteloader/LiteLoader.h>
#include <llapi/HookAPI.h>
#include <llapi/LoggerAPI.h>

#include <llapi/mc/InventoryTransactionPacket.hpp>
#include <llapi/mc/NetworkIdentifier.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/ServerPlayer.hpp>
#include <llapi/mc/ServerNetworkHandler.hpp>
#include <llapi/mc/ClientCacheBlobStatusPacket.hpp>
#include <llapi/mc/BinaryStream.hpp>
#include <llapi/EventAPI.h>

#include <llapi/mc/SharedConstants.hpp>
#include <llapi/mc/PropertiesSettings.hpp>
#include <llapi/mc/ServerPlayer.hpp>
#include <llapi/ScheduleAPI.h>
#include <Windows.h>

using namespace ll;

// Fix bug
TClasslessInstanceHook(bool, "?_read@ClientCacheBlobStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
                       ReadOnlyBinaryStream* a2) {
    ReadOnlyBinaryStream pkt(a2->getData(), false);
    pkt.getUnsignedVarInt();
    if (pkt.getUnsignedVarInt() >= 0xfff)
        return false;
    if (pkt.getUnsignedVarInt() >= 0xfff)
        return false;
    return original(this, a2);
}

// Fix bug
TClasslessInstanceHook(void*, "?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
                       ReadOnlyBinaryStream* a2) {
    return (void*)1;
}

// Fix bug
TClasslessInstanceHook(void*, "?_read@EduUriResourcePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
                       ReadOnlyBinaryStream* a2) {
    return (void*)1;
}

// Fix the listening port twice
TClasslessInstanceHook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ") {
    static bool isFirstLog = true;
    if (globalConfig.enableFixListenPort) {
        if (isFirstLog) {
            isFirstLog = false;
            original(this);
            endTime = clock();
            Logger("Server").info("Done (" + fmt::format("{:.1f}", (endTime - startTime) * 1.0 / 1000) + "s)! For help, type \"help\" or \"?\"");
            return 1;
        }
        return 0;
    } else {
        original(this);
        if (!isFirstLog) {
            endTime = clock();
            Logger("Server").info("Done (" + fmt::format("{:.1f}", (endTime - startTime) * 1.0 / 1000) + "s)! For help, type \"help\" or \"?\"");
        }
        isFirstLog = false;
        return 1;
    }
}

// Fix abnormal items
#include <llapi/mc/InventorySource.hpp>
#include <llapi/mc/InventoryTransaction.hpp>
#include <llapi/mc/InventoryAction.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/ElementBlock.hpp>
#include <llapi/mc/IContainerManager.hpp>
#include <llapi/mc/ColorFormat.hpp>
#include <magic_enum/magic_enum.hpp>

inline bool itemMayFromReducer(ItemStack const& item) {
    return item.isNull() || (ElementBlock::isElement(item) && !item.hasUserData());
}

TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier const& netid, InventoryTransactionPacket* pk) {
    if (globalConfig.enableAntiGive) {
        auto sp = (Player*)this->getServerPlayer(netid);
        auto& actions = pk->transaction->data.actions;
        bool abnormal = false;
        bool mayFromReducer = true;
        bool isContainer = false;
        for (auto& action : actions) {
            if (action.first.type == InventorySourceType::Container) {
                isContainer = true;
                if (abnormal) {
                    logger.warn(tr("ll.antiAbnormalItem.detected", sp->getRealName()));
                    mayFromReducer = false;
                }
            }
            if (action.first.type == InventorySourceType::NONIMPLEMENTEDTODO) {
                for (auto& a : action.second) {
                    auto fromDesc = ItemStack::fromDescriptor(a.fromDescriptor, Global<Level>->getBlockPalette(), true);
                    auto toDesc = ItemStack::fromDescriptor(a.fromDescriptor, Global<Level>->getBlockPalette(), true);
                    if (isContainer || !itemMayFromReducer(fromDesc) || !itemMayFromReducer(toDesc) || !itemMayFromReducer(a.fromItem) || !itemMayFromReducer(a.toItem)) {
                        if (mayFromReducer) {
                            logger.warn(tr("ll.antiAbnormalItem.detected", sp->getRealName()));
                        }
                        if (!toDesc.isNull()) {
                            logger.warn(tr("ll.antiAbnormalItem.itemInfo", toDesc.toString()));
                        }
                        mayFromReducer = false;
                    }
                }
                abnormal = true;
            }
        }

        if (abnormal && !mayFromReducer) {
            string cmd = globalConfig.antiGiveCommand;
            ReplaceStr(cmd, "{player}", "\"" + sp->getRealName() + "\"");
            Level::runcmd(cmd);
            return;
        }
    }
    return original(this, netid, pk);
}

TInstanceHook(size_t, "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", PropertiesSettings, const std::string& file) {
    auto out = original(this, file);
    if (ll::globalConfig.enableUnoccupyPort19132) {
        // logger.warn("If you turn on this feature, your server will not be displayed on the LAN");
        DWORD v4Flag, v6Flag;
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePort, 4, PAGE_READWRITE, &v4Flag);
        *(unsigned short*)&SharedConstants::NetworkDefaultGamePort = getServerPort();
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePort, 4, v4Flag, NULL);

        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePortv6, 4, PAGE_READWRITE, &v6Flag);
        *(unsigned short*)&SharedConstants::NetworkDefaultGamePortv6 = getServerPortv6();
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePortv6, 4, v6Flag, NULL);
    }
    // Global service
    Global<PropertiesSettings> = this;
    return out;
}

// Fix move view crash (ref PlayerAuthInput[MoveView])
Player* movingViewPlayer = nullptr;
TInstanceHook(void, "?moveView@Player@@UEAAXXZ",
              Player) {
    movingViewPlayer = this;
    original(this);
    movingViewPlayer = nullptr;
}
#include <llapi/mc/ChunkViewSource.hpp>
inline bool Interval(int a1) {
    if (a1 < 0x5ffffff && a1 > -0x5ffffff)
        return true;
    return false;
}
template <typename T>
inline bool validPosition(T const& pos) {
    if (isnan(static_cast<float>(pos.x)) || isnan(static_cast<float>(pos.z)))
        return false;
    return Interval(static_cast<int>(pos.x)) && Interval(static_cast<int>(pos.y)) && Interval(static_cast<int>(pos.z));
}
inline void fixPlayerPosition(Player* pl, bool kick = true) {
    if (pl->isPlayer()) {
        logger.warn << "Player(" << pl->getRealName() << ") sent invalid MoveView Packet!" << Logger::endl;
        auto& pos = pl->getPosPrev();
        if (validPosition(pos))
            pl->setPos(pl->getPosition());
        else
            pl->setPos(Global<Level>->getDefaultSpawn().bottomCenter());
        if (kick)
            pl->kick("error move");
    }
}
TInstanceHook(void, "?moveSpawnView@Player@@QEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z",
              Player, class Vec3 const& pos, class AutomaticID<class Dimension, int> dimid) {
    if (validPosition(pos))
        return original(this, pos, dimid);
    fixPlayerPosition(this, false);
}
TClasslessInstanceHook(__int64, "?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NW4ChunkSourceViewGenerateMode@ChunkSource@@V?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@UActorUniqueID@@@Z",
                       BlockPos a2, int a3, unsigned __int8 a4, int a5, __int64 a6, __int64 a7) {
    if (validPosition(a2))
        return original(this, a2, a3, a4, a5, a6, a7);
    fixPlayerPosition(movingViewPlayer);
    return 0;
}

TInstanceHook(void, "?move@Player@@UEAAXAEBVVec3@@@Z", Player, Vec3 pos) {
    if (validPosition(pos))
        return original(this, pos);
    logger.warn << "Player(" << this->getRealName() << ") sent invalid Move Packet!" << Logger::endl;
    this->kick("error move");
    return;
}

#if false
TInstanceHook(void, "?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer , ActorDamageSource* ds)
{
    original(this, ds);
    if (ll::globalConfig.enableFixMcBug)
    {
        auto name = getRealName();
        Schedule::delay([name]() {
            auto pl = Global<Level>->getPlayer(name);
            if (pl)
                pl->kill();
        },1);
    }
}
#endif

// Fix Fishing Hook changeDimension Crash
TInstanceHook(__int64, "?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@@Z", Actor, unsigned int a1) {
    if (!ll::globalConfig.enableFixMcBug)
        return original(this, a1);
    if ((int)this->getEntityTypeId() == 0x4D)
        return 0;
    return original(this, a1);
}

TClasslessInstanceHook(__int64, "?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z", Actor* a1) {
    if (!ll::globalConfig.enableFixMcBug)
        return original(this, a1);
    if ((int)a1->getEntityTypeId() == 0x4D)
        return 0;
    return original(this, a1);
}

// Fix wine stop
TClasslessInstanceHook(void, "?leaveGameSync@ServerInstance@@QEAAXXZ") {
    original(this);
    if (IsWineEnvironment()) {
        std::cerr << "Quit correctly" << std::endl;
        auto proc = GetCurrentProcess();
        TerminateProcess(proc, 0);
    }
}

TClasslessInstanceHook(enum StartupResult, "?Startup@RakPeer@RakNet@@UEAA?AW4StartupResult@2@IPEAUSocketDescriptor@2@IH@Z",
                       unsigned int maxConnections, class SocketDescriptor* socketDescriptors, unsigned socketDescriptorCount, int threadPriority) {
    if (maxConnections > 0xFFFF) {
        maxConnections = 0xFFFF;
    }
    return original(this, maxConnections, socketDescriptors, socketDescriptorCount, threadPriority);
}

// Fix command crash when server is stopping
TClasslessInstanceHook(void, "?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z",
                       std::string const& a1, std::string const& a2, std::string const& a3, std::string const& a4) {
    if (ll::isServerStopping())
        return;
    original(this, a1, a2, a3, a4);
}
TClasslessInstanceHook(void, "?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z",
                       class Player& a1) {
    if (ll::isServerStopping())
        return;
    original(this, a1);
}

TClasslessInstanceHook(void, "?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z",
                       class Player& a1, float a2) {
    if (ll::isServerStopping())
        return;
    original(this, a1, a2);
}
TClasslessInstanceHook(void, "?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z",
                       class Player* a1, float a2, int a3, int a4) {
    if (ll::isServerStopping())
        return;
    original(this, a1, a2, a3, a4);
}

// Set stdin mode to text mode if in wine environment
inline bool _tryFixConsoleInputMode() {
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
THook(std::wistream&,
      "??$getline@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@$$"
      "QEAV10@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@_W@Z",
      std::wistream&& ret, std::wstring& a1, wchar_t a2) {
    if (&ret == &std::wcin) {
        static bool fixed = _tryFixConsoleInputMode();
    }
    return original(std::move(ret), a1, a2);
}

// Fix server broadcast bug.
TClasslessInstanceHook(bool, "?getLANBroadcast@LevelData@@QEBA_NXZ") {
    if (ll::globalConfig.enableFixBroadcastBug) {
        return true;
    }
    return original(this);
}

TClasslessInstanceHook(bool, "?getLANBroadcastIntent@LevelData@@QEBA_NXZ") {
    if (ll::globalConfig.enableFixBroadcastBug) {
        return true;
    }
    return original(this);
}

// Disable 'Running AutoCompaction...' log.
bool pauseBLogging = false;
THook(__int64, "std::_Func_impl_no_alloc<<lambda_bc4a73e92ba7b703b39f322d94bb55f6>,TaskResult>::_Do_call",
      __int64 a1, __int64 a2) {
    if (ll::globalConfig.disableAutoCompactionLog) {
        pauseBLogging = true;
        auto v = original(a1, a2);
        pauseBLogging = false;
        return v;
    }
    return original(a1, a2);
}

TClasslessInstanceHook(char, "?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z",
                       char a2, int a3, int a4, unsigned int a5, __int64 a6, int a7, __int64 a8, __int64 a9) {
    if (ll::globalConfig.disableAutoCompactionLog && pauseBLogging) {
        return 0;
    }
    return original(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// Try Fix BDS Crash
// Beta

THook(void*, "??0ScopedTimer@ImguiProfiler@@QEAA@PEBD0_N@Z",
      void* self, char* a2, char* a3, char a4) {
    if (ll::globalConfig.enableFixBDSCrash) {
        return nullptr;
    }
    return original(self, a2, a3, a4);
}

THook(void, "??1ScopedTimer@ImguiProfiler@@UEAA@XZ",
      void* self) {
    if (ll::globalConfig.enableFixBDSCrash) {
        return;
    }
    return original(self);
}

SHook2("_tickDimensionTransition", __int64, "40 53 55 41 56 41 57 48 ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? ?? ?? 48 33 "
                                            "C4 48 89 ?? ?? ?? 48 8B C2 4C 8B F9 48 8B C8 33 D2 49 8B D9 49 8B E8 E8 ?? ?? ?? ?? 4C 8B F0 48 85 C0",
       __int64 a1, ActorOwnerComponent* a2, __int64 a3, void* a4) {
    if (ll::globalConfig.enableFixBDSCrash) {
        auto ac = Actor::tryGetFromComponent(*a2, 0);
        if (ac) {
            auto bs = &ac->getRegionConst();
            if (bs == nullptr || !bs)
                return NULL;
        }
    }
    return original(a1, a2, a3, a4);
}

THook(void, "?_trackMovement@GameEventMovementTrackingSystem@@CAXAEAVActor@@AEAVGameEventMovementTrackingComponent@@@Z",
      Actor* a1, void* self) {
    if (ll::globalConfig.enableFixBDSCrash) {
        auto bs = &a1->getRegionConst();
        if (bs == nullptr || !bs) {
            return;
        }
    }
    original(a1, self);
}

#include <llapi/mc/LevelChunk.hpp>
#include <llapi/mc/ChunkSource.hpp>

THook(LevelChunk*, "?getChunk@BlockSource@@QEBAPEAVLevelChunk@@AEBVChunkPos@@@Z",
      BlockSource* self, ChunkPos* a2) {
    if (ll::globalConfig.enableFixBDSCrash) {
        LevelChunk* ptr = nullptr;
        try {
            ptr = original(self, a2);
        } catch (...) {
            return nullptr;
        }
        return ptr;
    }
    return original(self, a2);
}


THook(__int64, "?getAvailableChunk@ChunkSource@@QEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z",
      __int64 a1, __int64 a2) {
    if (ll::globalConfig.enableFixBDSCrash) {
        __int64 ptr = NULL;
        try {
            ptr = original(a1, a2);
        } catch (...) {
            return NULL;
        }
        return ptr;
    }
    return original(a1, a2);
}

TInstanceHook(BlockSource*, "?getRegionConst@Actor@@QEBAAEBVBlockSource@@XZ",
              Actor) {

    auto bs = original(this);
    if (ll::globalConfig.enableFixBDSCrash) {
        if (!bs) {
            return Level::getBlockSource(getDimensionId());
        }
    }
    return bs;
}