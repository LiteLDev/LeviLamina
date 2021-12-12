#include <HookAPI.h>
#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>

#include <MC/NetworkIdentifier.hpp>
#include <MC/ServerNetworkHandler.hpp>

#include <Config.h>
#include <LoggerAPI.h>
#include <MC/InventoryTransactionPacket.hpp>
#include <unordered_map>
using namespace LL;

bool ip_information_logged = false;

//Fix disconnect packet crash bug
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier* ni, void* packet) {
    if (globalConfig.enableFixDisconnectBug) {
        if (!getServerPlayer(*ni))
            return;
    }
    return original(this, ni, packet);
}


//Fix the listening port twice.
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
      void* _this) {
    if (globalConfig.enableFixListenPort) {
        if (!ip_information_logged) {
            ip_information_logged = true;
            return original(_this);
        }
        return 0;
    } else {
        return original(_this);
    }
}

// Fix abnormal items.
class InventoryTransaction;
THook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
      ServerNetworkHandler& snh, NetworkIdentifier const& netid, InventoryTransactionPacket* pk) {
    InventoryTransaction* data = (InventoryTransaction*)(*((__int64*)pk + 10) + 16);
    auto a = dAccess<std::unordered_map<int, void*>, 0>(data);
    bool abnormal = 0;
    for (auto i : a)
        if (i.first == 99999) {
            abnormal = 1;
        }
    if (abnormal) {
        Player* sp = (Player*)snh.getServerPlayer(netid);
        logger.warn << "Player(" << sp->getRealName() << ") item data error!" << Logger::endl;
        return nullptr;
    }
    return original(snh, netid, pk);
}