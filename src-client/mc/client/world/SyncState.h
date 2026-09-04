#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class SyncState : uint {
    CloudSynced    = 0,
    CloudOnly      = 1,
    CloudError     = 2,
    LocalOutOfDate = 3,
    LocalOnly      = 4,
};

}
