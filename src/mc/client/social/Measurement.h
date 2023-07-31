#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Measurement {

public:
    // prevent constructor by default
    Measurement& operator=(Measurement const&) = delete;
    Measurement(Measurement const&)            = delete;
    Measurement()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1Measurement\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~Measurement();
    // NOLINTEND
};

}; // namespace Social::Events
