#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ImportFailure : int {
    UnknownFileType             = 0,
    Duplicate                   = 1,
    MalformedZip                = 2,
    Default                     = 3,
    Incompatible                = 4,
    Cancelled                   = 5,
    UnknownPackType             = 6,
    NoFilenamesFound            = 7,
    UnableToDetermineRootForZip = 8,
    NoRootDirectory             = 9,
    NoPackInRepo                = 10,
};
