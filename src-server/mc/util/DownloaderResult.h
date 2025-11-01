#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DownloaderResult : int {
    Successful             = 0,
    InvalidDestinationPath = 1,
    InvalidURI             = 2,
    EmptyHostURI           = 3,
    RequiresXboxLive       = 4,
    RealmsError            = 5,
    FileTooBig             = 6,
    Unknown                = 7,
    Canceled               = 8,
    Count                  = 9,
};
