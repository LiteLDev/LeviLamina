#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Connection {

enum class DisconnectionStage : uint {
    Unknown = 0,
    Prerequisites = 1,
    InitialConnection = 2,
    ClientDisconnection = 3,
    ServerDisconnection = 4,
};

}
