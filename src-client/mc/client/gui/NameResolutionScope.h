#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class NameResolutionScope : int {
    Global   = 0,
    Local    = 1,
    Sibling  = 2,
    Ancestor = 3,
};

}
