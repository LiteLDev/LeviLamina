#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkDebugManager {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
    class Tracker;
    // clang-format on

    // NetworkDebugManager inner types define
    class Tracker {

    public:
        // prevent constructor by default
        Tracker& operator=(Tracker const&) = delete;
        Tracker(Tracker const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Tracker\@NetworkDebugManager\@\@QEAA\@XZ
         */
        MCAPI Tracker();
        /**
         * @symbol ??1Tracker\@NetworkDebugManager\@\@QEAA\@XZ
         */
        MCAPI ~Tracker();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkDebugManager& operator=(NetworkDebugManager const&) = delete;
    NetworkDebugManager(NetworkDebugManager const&)            = delete;
    NetworkDebugManager()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?MAX_NUMBER_OF_SAMPLES\@NetworkDebugManager\@\@2HB
     */
    MCAPI static int const MAX_NUMBER_OF_SAMPLES;
    /**
     * @symbol ?UPDATE_INTERVAL_MILLISECONDS\@NetworkDebugManager\@\@2HB
     */
    MCAPI static int const UPDATE_INTERVAL_MILLISECONDS;
    // NOLINTEND
};
