#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketCompressionAlgorithm : int {
    ZLib   = 0x0,
    Snappy = 0x1,
};
