#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class FieldType : uchar {
    KFixed8  = 0,
    KFixed32 = 1,
    KFixed64 = 2,
    KVarInt  = 3,
    KString  = 4,
};

}
