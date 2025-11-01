#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::RunLoop {

enum class ThreadState : int {
    Running = 0,
    Suspended = 1,
    Stopped = 2,
};

}
