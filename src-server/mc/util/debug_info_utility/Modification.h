#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

enum class Modification : int {
    Unchanged = 0,
    Addition = 1,
    Edit = 2,
    Mixed = 3,
};

}
