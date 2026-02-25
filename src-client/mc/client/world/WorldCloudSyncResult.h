#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class WorldCloudSyncResult : int {
    Ok                  = 0,
    Unsupported         = 1,
    WorldNotCloudStored = 2,
    UnableToGetManifest = 3,
    UnableToSyncWorld   = 4,
};

}
