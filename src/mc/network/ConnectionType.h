#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class ConnectionType {
    Success            = 0,
    CannotReadFromFile = 1,
    CannotWriteToFile  = 2,
    FileAlreadyExists  = 3,
    CleanupFailed      = 4,
    InvalidStatusCode  = 5,
    InvalidUrl         = 6,
    InternalError      = 7,
    UserNotSignedIn    = 8,
    NotInitialized     = 9,
    UnknownError       = 10,
};
};
