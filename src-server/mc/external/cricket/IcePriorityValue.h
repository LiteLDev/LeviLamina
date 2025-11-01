#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IcePriorityValue : uchar {
    RelayTls = 0,
    RelayTcp = 1,
    RelayUdp = 2,
    PrflxTcp = 80,
    HostTcp = 90,
    Srflx = 100,
    Prflx = 110,
    Host = 126,
};

}
