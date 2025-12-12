#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class TlsCertPolicy : int {
    Secure          = 0,
    InsecureNoCheck = 1,
};

}
