#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class AudioDecodeRecoveryMode : int {
    WallClockSync = 0,
    Resume        = 1,
};

}
