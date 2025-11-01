#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class MultiplayerState : int {
    None = 0,
    ServerHosting = 1,
    ServerPlayerJoining = 2,
    ServerWaitingforServerUPNP = 11,
    ServerWaitingforServerNAT = 3,
    ServerWaitingforClientNAT = 4,
    ServerConnectingToClient = 5,
    ClientJoinedLobby = 6,
    ClientWaitingforClientNAT = 7,
    ClientWaitingforServerNAT = 8,
    ClientConnectingToHost = 9,
    ClientInGame = 10,
    ClientNATDiscovery = 12,
    ClientWaitingForServerSignaling = 13,
    ClientWaitingForClientSignaling = 14,
};

}
