/**
 * @file  NetworkDebugManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkDebugManager.
 *
 */
class NetworkDebugManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKDEBUGMANAGER
public:
    class NetworkDebugManager& operator=(class NetworkDebugManager const &) = delete;
    NetworkDebugManager(class NetworkDebugManager const &) = delete;
    NetworkDebugManager() = delete;
#endif

public:
    /**
     * @symbol  ?MAX_NUMBER_OF_SAMPLES\@NetworkDebugManager\@\@2HB
     */
    MCAPI static int const MAX_NUMBER_OF_SAMPLES;
    /**
     * @symbol  ?UPDATE_INTERVAL_MILLISECONDS\@NetworkDebugManager\@\@2HB
     */
    MCAPI static int const UPDATE_INTERVAL_MILLISECONDS;

};