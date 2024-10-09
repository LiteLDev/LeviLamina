#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ProcessGlobals {
// NOLINTBEGIN
MCAPI extern std::atomic<struct XTaskQueueObject*> g_defaultProcessQueue;

MCAPI extern std::atomic<struct XTaskQueueObject*> g_processQueue;
// NOLINTEND

}; // namespace ProcessGlobals
