#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockBreadthFirst {

enum class Result : uchar {
    Ignore               = 0,
    ProvideMore          = 1,
    ProcessedProvideMore = 2,
};

}
