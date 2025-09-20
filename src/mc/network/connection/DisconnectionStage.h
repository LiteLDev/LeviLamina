#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Connection {

enum class DisconnectionStage : uint {
    Unknown             = 0,
    InitialConnection   = 1,
    ClientDisconnection = 2,
    ServerDisconnection = 3,
};

}
