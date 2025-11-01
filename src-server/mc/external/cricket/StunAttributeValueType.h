#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class StunAttributeValueType : int {
    Unknown    = 0,
    Address    = 1,
    XorAddress = 2,
    Uint32     = 3,
    Uint64     = 4,
    ByteString = 5,
    ErrorCode  = 6,
    Uint16List = 7,
};

}
