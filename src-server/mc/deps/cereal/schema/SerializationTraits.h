#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class SerializationTraits : uchar {
    // bitfield representation
    Compression = 1 << 0,
    BigEndian = 1 << 1,
    EnumAsValue = 1 << 2,
    NoSizeCompression = 1 << 3,
    SkipAlsoReadAs = 1 << 4,
    EnttEnumAsBitmask = Compression | SkipAlsoReadAs,
};

}
