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

using namespace LL;

bool ipInformationLogged = false;

// Patch for CVE-2021-45384
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

// Patch for CVE-2021-45383
TClasslessInstanceHook(bool, "?_read@ClientCacheBlobStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
      ReadOnlyBinaryStream* a2)
{
    ReadOnlyBinaryStream pkt(a2->getData(), 0);
    pkt.getUnsignedVarInt();
    if (pkt.getUnsignedVarInt() >= 0xfff) return 0;
    if (pkt.getUnsignedVarInt() >= 0xfff) return 0;
    return original(this, a2);
}

//Fix bug
TClasslessInstanceHook(void*, "?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z"
    ,ReadOnlyBinaryStream* a2)
{
    return (void*)1;
}

// Fix the listening port twice
TClasslessInstanceHook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ")
{
    if (globalConfig.enableFixListenPort)
    {
        if (!ipInformationLogged)
        {
            ipInformationLogged = true;
            return original(this);
        }
        return 0;
    }
    else
    {
        return original(this);
    }
}

// Fix abnormal items
#include <MC/InventorySource.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/InventoryAction.hpp>
#include <MC/IContainerManager.hpp>

TInstanceHook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier const& netid, InventoryTransactionPacket* pk)
{
    if (globalConfig.enableAntiGive)
    {
        auto sp = (Player*)this->getServerPlayer(netid);
        auto data = (InventoryTransaction*)(*((__int64*)pk + 10) + 16);
        auto a = dAccess<std::unordered_map<InventorySource*, void*>, 0>(data);
        bool abnormal = false;
        for (auto& i : a)
            if ((int)*(&i.first) == 99999)
            {
                auto icm = sp->getContainerManager().lock();
                if (icm)
                {
                    auto id = VirtualCall<int>(icm.get(), 0x18);
                    if ((int)id == 22) return original(this, netid, pk);
                }
                abnormal = true;
            }
        if (abnormal)
        {
            logger.warn << "Player(" << sp->getRealName() << ") item data error!" << Logger::endl;
            __debugbreak();
            return nullptr;
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
        if (num > 0 && num == 1)
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
    if (a1 < 0x5ffffff && a1 > -0x5ffffff) return 1;
    return 0;
}
TClasslessInstanceHook(__int64, "?move@ChunkViewSource@@QEAAXAEBVBlockPos@@H_NV?$function@$$A6AXV?$buffer_span_mut@V?$shared_ptr@VLevelChunk@@@std@@@@V?$buffer_span@I@@@Z@std@@@Z",
    BlockPos& a1, int a2, bool a3, std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)> a4)
{
    if (Interval(a1.x) && Interval(a1.y) && Interval(a1.z))
        return original(this, a1, a2, a3, a4);
    Player* pl = movingViewPlayer;
    if (pl->isPlayer())
    {
        logger.warn << "Player(" << pl->getRealName() << ") sent invalid MoveView Packet!" << Logger::endl;
        pl->setPos(pl->getPosOld());
    }
    return 0;
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