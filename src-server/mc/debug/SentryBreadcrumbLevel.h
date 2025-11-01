#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SentryBreadcrumbLevel : int {
    Error   = 0,
    Warning = 1,
    Info    = 2,
    Debug   = 3,
    Fatal   = 4,
};
