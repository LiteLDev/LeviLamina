#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONALSTRING
public:
    OptionalString& operator=(OptionalString const&) = delete;
    OptionalString(OptionalString const&)            = delete;
    OptionalString()                                 = delete;
#endif

public:
    /**
     * @symbol ??1OptionalString\@\@QEAA\@XZ
     */
    MCAPI ~OptionalString();
};
