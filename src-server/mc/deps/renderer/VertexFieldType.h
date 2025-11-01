#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class VertexFieldType : ushort {
    Unknown = 0,
    SInt8 = 1,
    UInt8 = 2,
    SInt16 = 3,
    UInt16 = 4,
    SInt32 = 5,
    UInt32 = 6,
    Half = 7,
    Float = 8,
};

}
