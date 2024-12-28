#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SentryHelper {
public:
    // prevent constructor by default
    SentryHelper& operator=(SentryHelper const&);
    SentryHelper(SentryHelper const&);
    SentryHelper();
};
