#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class BrpakValidationResult : int {
    Valid              = 0,
    NotAZip            = 1,
    Empty              = 2,
    UnsupportedVersion = 3,
    NonStoreEntry      = 4,
    PathTraversal      = 5,
    TooManyEntries     = 6,
    InvalidOffset      = 7,
};

}
