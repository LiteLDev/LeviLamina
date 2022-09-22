/**
 * @file  ProcessGlobals.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1059055418
     * @symbol ?g_defaultProcessQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_defaultProcessQueue;
    /**
     * @hash   498144650
     * @symbol ?g_processQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_processQueue;

};