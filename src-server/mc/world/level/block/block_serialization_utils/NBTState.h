#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockSerializationUtils {

enum class NBTState : int {
    Malformed = 0,
    Unknown = 1,
    Success = 2,
};

}
