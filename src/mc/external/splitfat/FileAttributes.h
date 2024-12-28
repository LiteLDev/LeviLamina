#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

enum class FileAttributes : uint {
    // bitfield representation
    File    = 1u << 0,
    Binary  = 1u << 1,
    Deleted = 1u << 2,
    Hidden  = 1u << 3,
};

}
