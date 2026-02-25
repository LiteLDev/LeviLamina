#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class UploadToRealmsError : int {
    ActionAlreadyInProgress = 0,
    CannotSaveWorld         = 1,
    InvalidWorldId          = 2,
    Generic                 = 3,
    TooManyRealms           = 4,
    InvalidRealmName        = 5,
    InvalidRealmDescription = 6,
    InvalidResponse         = 7,
    InvalidWorldName        = 8,
    CrossPlatformRestricted = 9,
    UnknownError            = 10,
};

}
