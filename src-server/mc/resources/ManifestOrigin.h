#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ManifestOrigin : schar {
    Directory = 0,
    Archive = 1,
    Realms = 2,
    Catalog = 3,
    WorldHistory = 4,
    Invalid = 5,
};
