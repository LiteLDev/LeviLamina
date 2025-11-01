#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class NATTypeDetectionResult : int {
    None                = 0,
    FullCone            = 1,
    AddressRestricted   = 2,
    PortRestricted      = 3,
    Symmetric           = 4,
    Unknown             = 5,
    DetectionInProgress = 6,
    SupportsUpnp        = 7,
    Count               = 8,
};

}
