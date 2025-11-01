#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

enum class GameTestCompletedErrorReason : int {
    Done    = 0,
    CleanUp = 1,
};

}
