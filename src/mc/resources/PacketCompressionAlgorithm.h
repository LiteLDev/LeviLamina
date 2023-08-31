#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketCompressionAlgorithm : int32_t {
    ZLib   = 0x0,
    Snappy = 0x1,
};
