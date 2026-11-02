#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourcePackSelectionPolicy : int {
    Default                        = 0,
    PreferDevelopmentIfSameOrNewer = 1,
};
