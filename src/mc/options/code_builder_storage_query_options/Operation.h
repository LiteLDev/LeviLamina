#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilderStorageQueryOptions {

enum class Operation : uchar {
    None  = 0,
    Get   = 1,
    Set   = 2,
    Reset = 3,
};

}
