#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ProcessGlobals {
/**
 * @symbol ?g_defaultProcessQueue\@ProcessGlobals\@\@3U?$atomic\@PEAUXTaskQueueObject\@\@\@std\@\@A
 */
MCAPI extern struct std::atomic<struct XTaskQueueObject*> g_defaultProcessQueue;
/**
 * @symbol ?g_processQueue\@ProcessGlobals\@\@3U?$atomic\@PEAUXTaskQueueObject\@\@\@std\@\@A
 */
MCAPI extern struct std::atomic<struct XTaskQueueObject*> g_processQueue;

}; // namespace ProcessGlobals
