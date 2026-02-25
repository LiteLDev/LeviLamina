#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BindingType : int {
    None              = 0,
    Global            = 1,
    Collection        = 2,
    CollectionDetails = 3,
    View              = 4,
};
