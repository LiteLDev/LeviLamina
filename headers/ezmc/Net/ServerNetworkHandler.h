#pragma once

#include <hook.h>

#include "../Actor/ServerPlayer.h"
#include "../dll.h"
#include "NetworkIdentifier.h"

class Player;

class ServerNetworkHandler {
public:
    MCAPI void disconnectClient(NetworkIdentifier const&, unsigned char subid, std::string const& reason, bool hide);
    MCAPI void updateServerAnnouncement();

    inline ServerPlayer* getServerPlayer(NetworkIdentifier const& netId) {
        return _getServerPlayer(netId, 0);
    }

    void forceDisconnectClient(Player* player, bool hide) {
        CallServerClassMethod<void>("?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z", this, player, hide);
    }

    BASEAPI std::string& GetMotd();

private:
    MCAPI ServerPlayer* _getServerPlayer(NetworkIdentifier const&, unsigned char);
};