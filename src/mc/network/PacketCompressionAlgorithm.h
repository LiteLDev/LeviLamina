#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketCompressionAlgorithm : ushort {
    ZLib   = 0,
    Snappy = 1,
    None   = 65535,
};
