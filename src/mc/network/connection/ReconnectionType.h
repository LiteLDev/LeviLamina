#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Connection {

enum class ReconnectionType : uchar {
    None                             = 0,
    ReconnectOnResume                = 1,
    TryReconnectFromDisconnectScreen = 2,
};

}
