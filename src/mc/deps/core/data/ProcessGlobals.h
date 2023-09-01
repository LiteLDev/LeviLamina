#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ProcessGlobals {
// NOLINTBEGIN
// symbol: ?g_defaultProcessQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
MCAPI extern std::atomic<struct XTaskQueueObject*> g_defaultProcessQueue;

// symbol: ?g_processQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
MCAPI extern std::atomic<struct XTaskQueueObject*> g_processQueue;
// NOLINTEND

}; // namespace ProcessGlobals
