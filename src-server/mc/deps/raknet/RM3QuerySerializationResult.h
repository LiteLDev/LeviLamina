#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RM3QuerySerializationResult : int {
    CallSerialize      = 0,
    DoNotCallSerialize = 1,
    NeverCallSerialize = 2,
    Max                = 3,
};

}
