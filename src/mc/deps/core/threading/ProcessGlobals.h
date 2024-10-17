#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ProcessGlobals {
// thunks
// NOLINTBEGIN
MCAPI std::atomic<struct XTaskQueueObject*>& g_defaultProcessQueue();

MCAPI std::atomic<struct XTaskQueueObject*>& g_processQueue();
// NOLINTEND

}; // namespace ProcessGlobals
