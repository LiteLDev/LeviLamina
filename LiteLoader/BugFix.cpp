#include "pch.h"

bool isFixDisconnectBug();

//Fix disconnect packet crash bug
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z", ServerNetworkHandler* thi, NetworkIdentifier* ni, void* packet) {
    if (isFixDisconnectBug()) {
        return;
    }
    return original(thi, ni, packet);
}