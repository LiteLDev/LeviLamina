#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class zip_encoding_type : int {
    Unknown     = 0,
    Ascii       = 1,
    Utf8Known   = 2,
    Utf8Guessed = 3,
    Cp437       = 4,
    Error       = 5,
};
