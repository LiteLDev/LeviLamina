#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OSInformation {

public:
    // prevent constructor by default
    OSInformation& operator=(OSInformation const&) = delete;
    OSInformation(OSInformation const&)            = delete;
    OSInformation()                                = delete;

public:
    /**
     * @symbol ??1OSInformation\@\@QEAA\@XZ
     */
    MCAPI ~OSInformation(); // NOLINT
};
