#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asn1 {

enum class Asn1Type : int {
    Invalid     = 0,
    Set         = 1,
    Sequence    = 2,
    Int         = 3,
    OctetString = 4,
    UTF8String  = 5,
    IA5String   = 6,
};

}
