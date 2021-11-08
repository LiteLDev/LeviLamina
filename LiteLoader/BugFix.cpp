#include <HookAPI.h>
#include <MCApi/ServerPlayer.hpp>
#include <MCApi/ServerNetworkHandler.hpp>
#include <MCApi/NetworkIdentifier.hpp>

//bool isFixDisconnectBug();
//bool isFixListenPort();

//Fix disconnect packet crash bug
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
    ServerNetworkHandler* thi, NetworkIdentifier* ni, void* packet)
{
    //if (isFixDisconnectBug()) {
        ServerPlayer* sp = thi->getServerPlayer(*ni);
        if (!sp) {
            return;
        }
    //}
    return original(thi, ni, packet);
}

//Fix the listening port twice
//From https://github.com/Redbeanw44602/FixIPLogger

bool a_call = true;
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
      void* _this) {
    //if (isFixListenPort()) {
        if (a_call) {
            a_call = false;
            return original(_this);
        }
        return 0;
    //} else {
        return original(_this);
    //}
}