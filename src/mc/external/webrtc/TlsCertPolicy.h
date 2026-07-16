#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class TlsCertPolicy : int {
    Secure          = 0,
    InsecureNoCheck = 1,
};

}
