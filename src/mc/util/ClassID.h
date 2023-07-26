#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClassID {

public:
    // prevent constructor by default
    ClassID& operator=(ClassID const&) = delete;
    ClassID(ClassID const&)            = delete;
    ClassID()                          = delete;

    // private:
    /**
     * @symbol ?getNextID\@ClassID\@\@CA_KXZ
     */
    MCAPI static unsigned __int64 getNextID(); // NOLINT

private:
};
