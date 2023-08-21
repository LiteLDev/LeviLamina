#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSerializationUtils {

enum class NBTState {
    Malformed = 0x0,
    Unknown   = 0x1,
    Success   = 0x2,
};
};
