/**
 * @file  ProcessGlobals.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ProcessGlobals.
 *
 */
namespace ProcessGlobals {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?g_defaultProcessQueue\@ProcessGlobals\@\@3U?$atomic\@PEAUXTaskQueueObject\@\@\@std\@\@A
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_defaultProcessQueue;
    /**
     * @symbol  ?g_processQueue\@ProcessGlobals\@\@3U?$atomic\@PEAUXTaskQueueObject\@\@\@std\@\@A
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_processQueue;

};