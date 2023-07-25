#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Measurement {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_MEASUREMENT
public:
    Measurement& operator=(Measurement const&) = delete;
    Measurement(Measurement const&)            = delete;
    Measurement()                              = delete;
#endif

public:
    /**
     * @symbol ??1Measurement\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~Measurement();
};

}; // namespace Social::Events
