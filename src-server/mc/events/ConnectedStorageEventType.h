#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ConnectedStorageEventType : int {
    NotSet = 0,
    Upload = 1,
    Download = 2,
    Delete = 3,
    RetryUpload = 4,
};
