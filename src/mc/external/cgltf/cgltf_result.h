#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class cgltf_result : int {
    Success        = 0,
    DataTooShort   = 1,
    UnknownFormat  = 2,
    InvalidJson    = 3,
    InvalidGltf    = 4,
    InvalidOptions = 5,
    FileNotFound   = 6,
    IoError        = 7,
    OutOfMemory    = 8,
    LegacyGltf     = 9,
    MaxEnum        = 10,
};
