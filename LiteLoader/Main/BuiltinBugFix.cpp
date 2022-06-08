#include <unordered_map>

#include <Main/Config.h>
#include <Main/LiteLoader.h>
#include <HookAPI.h>
#include <LoggerAPI.h>

#include <MC/InventoryTransactionPacket.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/ClientCacheBlobStatusPacket.hpp>
#include <MC/BinaryStream.hpp>

#include <MC/SharedConstants.hpp>
#include <MC/PropertiesSettings.hpp>
#include <MC/ServerPlayer.hpp>
#include <LiteLoader/Header/ScheduleAPI.h>

using namespace LL;


//Fix bug
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier* ni, void* packet)
{
    if (globalConfig.enableFixDisconnectBug)
    {
        if (!getServerPlayer(*ni))
            return;
    }
    return original(this, ni, packet);
}

//Fix bug
TClasslessInstanceHook(bool, "?_read@ClientCacheBlobStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
    ReadOnlyBinaryStream* a2)
{
    ReadOnlyBinaryStream pkt(a2->getData(), false);
    pkt.getUnsignedVarInt();
    if (pkt.getUnsignedVarInt() >= 0xfff) return false;
    if (pkt.getUnsignedVarInt() >= 0xfff) return false;
    return original(this, a2);
}

//Fix bug
TClasslessInstanceHook(void*, "?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
    ReadOnlyBinaryStream* a2)
{
    return (void*)1;
}

// Fix bug
TClasslessInstanceHook(void*, "?_read@EduUriResourcePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
    ReadOnlyBinaryStream* a2)
{
    return (void*)1;
}

// Fix the listening port twice
TClasslessInstanceHook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ")
{
    static bool isFirstLog = true;
    if (globalConfig.enableFixListenPort)
    {
        if (isFirstLog)
        {
            isFirstLog = false;
            original(this);
            endTime = clock();
            Logger("Server").info("Done (" + fmt::format("{:.1f}", (endTime - startTime) * 1.0 / 1000) + "s)! For help, type \"help\" or \"?\"");
            return 1;
        }
        return 0;
    }
    else
    {     
        original(this);
        if (!isFirstLog)
        {
            endTime = clock();
            Logger("Server").info("Done (" + fmt::format("{:.1f}", (endTime - startTime) * 1.0 / 1000) + "s)! For help, type \"help\" or \"?\""); 
        }
        isFirstLog = false;
        return 1;
    }
}

// Fix abnormal items
#include <MC/InventorySource.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/InventoryAction.hpp>
#include <MC/Level.hpp>
#include <MC/ElementBlock.hpp>
#include <MC/IContainerManager.hpp>
#include <MC/ColorFormat.hpp>
#include <magic_enum/magic_enum.hpp>

inline bool itemMayFromReducer(ItemStack const& item)
{
    return item.isNull() || (ElementBlock::isElement(item) && !item.hasUserData());
}

TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier const& netid, InventoryTransactionPacket* pk)
{
    if (globalConfig.enableAntiGive)
    {
        auto sp = (Player*)this->getServerPlayer(netid);
        auto& actions = pk->transaction->data.actions;
        bool abnormal = false;
        bool mayFromReducer = true;
        for (auto& action : actions)
            if (action.first.type == InventorySourceType::NONIMPLEMENTEDTODO)
            {
                for (auto& a : action.second)
                {
                    auto fromDesc = ItemStack::fromDescriptor(a.fromDescriptor, *Global<Level>->getBlockPalette(), true);
                    auto toDesc = ItemStack::fromDescriptor(a.fromDescriptor, *Global<Level>->getBlockPalette(), true);
                    if (!itemMayFromReducer(fromDesc) || !itemMayFromReducer(toDesc) || !itemMayFromReducer(a.fromItem) || !itemMayFromReducer(a.toItem))
                    {
                        if (mayFromReducer)
                            logger.warn << "Player(" << sp->getRealName() << ") item data error!" << Logger::endl;
                        if (!toDesc.isNull())
                            logger.warn("Item: {}", toDesc.toString());
                        mayFromReducer = false;
                    }
                }
                abnormal = true;
            }
        if (abnormal)
        {
            string cmd = ReplaceStr(globalConfig.antiGiveCommand, "{player}", sp->getRealName());
            Level::runcmd(cmd);
            return;
        }
    }
    return original(this, netid, pk);
}

#include <EventAPI.h>
void FixBugEvent()
{
}

// Fix sleeping drop item
#include <MC/ItemActor.hpp>
#include <MC/MovementInterpolator.hpp>
TInstanceHook(ItemActor*, "?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z", Actor, ItemStack* a2, char a3)
{
    auto out = dAccess<MovementInterpolator*, 0x508>(this);
    if (!dAccess<bool, 0x2c>(out))
    {
        auto num = dAccess<int, 0x20>(out);
        if (num == 1)
        {
            auto v17 = *(Vec2*)((char*)out + 0x14);
            this->setRot(v17);
        }
        --dAccess<int, 0x24>(out);
    }
    return original(this, a2, a3);
}

TInstanceHook(size_t, "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", PropertiesSettings, const std::string& file)
{
    auto out = original(this, file);
    if (LL::globalConfig.enableUnoccupyPort19132)
    {
        //logger.warn("If you turn on this feature, your server will not be displayed on the LAN");
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
              Player)
{
    movingViewPlayer = this;
    original(this);
    movingViewPlayer = nullptr;
}
#include <MC/ChunkViewSource.hpp>
inline bool Interval(int a1)
{
    if (a1 < 0x5ffffff && a1 > -0x5ffffff) return true;
    return false;
}
template <typename T>
inline bool validPosition(T const& pos)
{
    if (isnan(static_cast<float>(pos.x)) || isnan(static_cast<float>(pos.z))) return false;
    return Interval(static_cast<int>(pos.x)) && Interval(static_cast<int>(pos.y)) && Interval(static_cast<int>(pos.z));
}
inline void fixPlayerPosition(Player* pl, bool kick = true)
{
    if (pl->isPlayer())
    {
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
              Player, class Vec3 const& pos, class AutomaticID<class Dimension, int> dimid)
{
    if (validPosition(pos))
        return original(this, pos, dimid);
    fixPlayerPosition(false);
    
}
TClasslessInstanceHook(__int64, "?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z",
    BlockPos const& a1, int a2, bool a3, std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)> a4)
{
    if (validPosition(a1))
        return original(this, a1, a2, a3, a4);
    fixPlayerPosition(movingViewPlayer);
    return 0;
}

TInstanceHook(void, "?move@Player@@UEAAXAEBVVec3@@@Z", Player, Vec3 pos)
{
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
    if (LL::globalConfig.enableFixMcBug)
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

//fix Fishing Hook changeDimension Crash
TInstanceHook(__int64, "?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@_N@Z", Actor, unsigned int a1, char a2)
{
    if (!LL::globalConfig.enableFixMcBug) return original(this, a1, a2);
    if ((int)this->getEntityTypeId() == 0x4D) return 0;
    return original(this, a1, a2);
}
TClasslessInstanceHook(__int64, "?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z", Actor* a1)
{
    if (!LL::globalConfig.enableFixMcBug) return original(this, a1);
    if ((int)a1->getEntityTypeId() == 0x4D) return 0;
    return original(this, a1);
}

// Fix Thorns crash
#include <MC/ActorDamageSource.hpp>
TInstanceHook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z",
              Mob, class ActorDamageSource* damageSource, float damage, bool unk1_1, bool unk2_0)
{
    if (LL::globalConfig.enableFixMcBug && this)
    {
        static bool markThorns = false;
        static auto ActorDamageCause_Thorns = ActorDamageSource::lookupCause("thorns");
        if (damageSource->getCause() == ActorDamageCause_Thorns)
        {
            if (markThorns)
                return false;

            markThorns = true;
            auto rtn = original(this, damageSource, damage, unk1_1, unk2_0);
            markThorns = false;
            return rtn;
        }
    }
    return original(this, damageSource, damage, unk1_1, unk2_0);
}


//fix Wine Stop
extern bool isWine();
TClasslessInstanceHook(void, "?leaveGameSync@ServerInstance@@QEAAXXZ")
{
    original(this);
    if (isWine())
    {
        std::cerr << "Quit correctly" << std::endl;
        auto proc = GetCurrentProcess();
        TerminateProcess(proc, 0);
    }
}

TClasslessInstanceHook(enum StartupResult, "?Startup@RakPeer@RakNet@@UEAA?AW4StartupResult@2@IPEAUSocketDescriptor@2@IH@Z",
                       unsigned int maxConnections, class SocketDescriptor* socketDescriptors, unsigned socketDescriptorCount, int threadPriority)
{
    if (maxConnections > 0xFFFF)
    {
        maxConnections = 0xFFFF;
    }
    return original(this, maxConnections, socketDescriptors, socketDescriptorCount, threadPriority);
}

// Fix command crash when server is stopping
TClasslessInstanceHook(void, "?fireEventPlayerMessage@MinecraftEventing@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z",
                       std::string const& a1, std::string const& a2, std::string const& a3, std::string const& a4)
{
    if (LL::isServerStopping())
        return;
    original(this, a1, a2, a3, a4);
}
TClasslessInstanceHook(void, "?fireEventPlayerTransform@MinecraftEventing@@SAXAEAVPlayer@@@Z",
                       class Player& a1)
{
    if (LL::isServerStopping())
        return;
    original(this, a1);
}

TClasslessInstanceHook(void, "?fireEventPlayerTravelled@MinecraftEventing@@UEAAXPEAVPlayer@@M@Z",
                       class Player& a1, float a2)
{
    if (LL::isServerStopping())
        return;
    original(this, a1, a2);
}
TClasslessInstanceHook(void, "?fireEventPlayerTeleported@MinecraftEventing@@SAXPEAVPlayer@@MW4TeleportationCause@1@H@Z",
                       class Player* a1, float a2, int a3, int a4)
{
    if (LL::isServerStopping())
        return;
    original(this, a1, a2, a3, a4);
}


