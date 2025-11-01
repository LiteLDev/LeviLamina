#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DownloadError : int {
    None = 0,
    FileTooBig = 1,
    Unknown = 2,
    InvalidFileStructure = 3,
    AlreadyExists = 4,
    OutOfStorage = 5,
    Canceled = 6,
};
