#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RM3SerializationResult : int {
    BroadcastIdentically = 0,
    BroadcastIdenticallyForceSerialization = 1,
    SerializedUniquely = 2,
    SerializedAlways = 3,
    SerializedAlwaysIdentically = 4,
    DoNotSerialize = 5,
    NeverSerializeForThisConnection = 6,
    Max = 7,
};

}
