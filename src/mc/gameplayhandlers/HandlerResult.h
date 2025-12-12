#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HandlerResult : int {
    BypassListeners = 0,
    NotifyListeners = 1,
};
