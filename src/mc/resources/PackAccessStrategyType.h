#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackAccessStrategyType : int {
    Directory       = 0,
    Zip             = 1,
    DirectoryAndZip = 2,
    Encrypted       = 3,
    Invalid         = 4,
};
