#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

enum class TaskCompletionStatus : uchar {
    Succeeded = 0,
    Failed    = 1,
    Cancelled = 2,
};

}
