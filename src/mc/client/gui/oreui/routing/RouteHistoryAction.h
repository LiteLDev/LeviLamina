#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class RouteHistoryAction : int {
    Push             = 0,
    Replace          = 1,
    GoBackAndReplace = 2,
    Ignore           = 3,
};

}
