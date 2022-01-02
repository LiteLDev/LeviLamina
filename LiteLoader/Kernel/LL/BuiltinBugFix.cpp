#include <unordered_map>

#include <LL/Config.h>
#include <HookAPI.h>
#include <LoggerAPI.h>

#include <MC/InventoryTransactionPacket.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ServerNetworkHandler.hpp>

using namespace LL;

bool ip_information_logged = false;

//Fix disconnect packet crash bug
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier *ni, void *packet) {
    if (globalConfig.enableFixDisconnectBug) {
        if (!getServerPlayer(*ni))
            return;
    }
    return original(this, ni, packet);
}


//Fix the listening port twice.
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
      void *_this) {
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
#include <mc/InventorySource.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/InventoryAction.hpp>
#include <MC/IContainerManager.hpp>

THook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
      ServerNetworkHandler &snh, NetworkIdentifier const &netid, InventoryTransactionPacket *pk) {
    if (globalConfig.enableAntiGive) {
        auto *sp = (Player *) snh.getServerPlayer(netid);
        auto *data = (InventoryTransaction *) (*((__int64 *) pk + 10) + 16);
        auto a = dAccess<std::unordered_map<InventorySource *, void *>, 0>(data);
        bool abnormal = false;
        for (auto &i: a)
            if ((int) *(&i.first) == 99999) {
                auto icm = sp->getContainerManager().lock();
                if (icm) {
                    auto id = VirtualCall<int>(icm.get(), 0x18);
                    if ((int) id == 22) return original(snh, netid, pk);
                }
                abnormal = true;
            }
        if (abnormal) {
            logger.warn << "Player(" << sp->getRealName() << ") item data error!" << Logger::endl;
            return nullptr;
        }
    }
    return original(snh, netid, pk);
}