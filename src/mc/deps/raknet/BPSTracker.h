#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BPSTracker {
public:
    // BPSTracker inner types declare
    // clang-format off
    struct TimeAndValue2;
    // clang-format on

    // BPSTracker inner types define
    struct TimeAndValue2 {

    public:
        // prevent constructor by default
        TimeAndValue2& operator=(TimeAndValue2 const&) = delete;
        TimeAndValue2(TimeAndValue2 const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0TimeAndValue2\@BPSTracker\@RakNet\@\@QEAA\@XZ
         */
        MCAPI TimeAndValue2();
        /**
         * @symbol ??1TimeAndValue2\@BPSTracker\@RakNet\@\@QEAA\@XZ
         */
        MCAPI ~TimeAndValue2();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    BPSTracker& operator=(BPSTracker const&) = delete;
    BPSTracker(BPSTracker const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BPSTracker\@RakNet\@\@QEAA\@XZ
     */
    MCAPI BPSTracker();
    /**
     * @symbol ??1BPSTracker\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~BPSTracker();
    // NOLINTEND
};

}; // namespace RakNet
