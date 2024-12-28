#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FileType : int {
    Invalid      = 0,
    Zip          = 1,
    EncryptedZip = 2,
    Other        = 3,
};
