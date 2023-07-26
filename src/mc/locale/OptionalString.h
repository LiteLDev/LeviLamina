#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {

public:
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&) = delete;
    OptionalString(OptionalString const&)            = delete;
    OptionalString()                                 = delete;

public:
    /**
     * @symbol ??1OptionalString\@\@QEAA\@XZ
     */
    MCAPI ~OptionalString(); // NOLINT
};
