#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ReplicationPolicy : int {
    Unknown             = 0,
    ServerAuthoritative = 1,
    ClientAuthoritative = 2,
    Bidirectional       = 3,
};

}
