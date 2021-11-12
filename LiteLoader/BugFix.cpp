#include <HookAPI.h>
#include <MCApi/ServerPlayer.hpp>
#include <MCApi/ServerNetworkHandler.hpp>
#include <MCApi/NetworkIdentifier.hpp>
#include <Config.h>

#include <MCApi/InventoryTransactionPacket.hpp>
#include <unordered_map>
#include <LoggerAPI.h>
#include <PlayerAPI.h>
using namespace LL;

//Fix disconnect packet crash bug
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
    ServerNetworkHandler* _this, NetworkIdentifier* ni, void* packet)
{
    if (globalConfig.enableFixDisconnectBug) {
        if (!_this->getServerPlayer(*ni))
            return;
    }
    return original(_this, ni, packet);
}


//Fix the listening port twice
//From https://github.com/Redbeanw44602/FixIPLogger

bool a_call = true;
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
      void* _this)
{
    if (globalConfig.enableFixListenPort) {
        if (a_call) {
            a_call = false;
            return original(_this);
        }
        return 0;
    } else {
        return original(_this);
    }
}

class InventoryTransaction;
THook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
    ServerNetworkHandler& snh, NetworkIdentifier const& netid, InventoryTransactionPacket* pk)
{
    InventoryTransaction* data = (InventoryTransaction*)(*((__int64*)pk+10)+16);
    auto a    = dAccess<std::unordered_map<int, void*>, 0>(data);
    bool abnormal = 0;
    for (auto i :a)
        if (i.first == 99999) {
            abnormal = 1;
        }
    if (abnormal) {
        PlayerObj* sp = (PlayerObj*)snh.getServerPlayer(netid);
        Logger::Warn() << "Player("<< sp->getRealName()<<") item data error!" << Logger::endl;
        return nullptr;
    }
    return original(snh, netid, pk);
}