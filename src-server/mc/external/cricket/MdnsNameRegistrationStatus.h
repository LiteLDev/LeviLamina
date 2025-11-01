#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class MdnsNameRegistrationStatus : int {
    KNotStarted = 0,
    KInProgress = 1,
    KCompleted  = 2,
};

}
