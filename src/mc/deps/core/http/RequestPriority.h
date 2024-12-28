#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

enum class RequestPriority : uint {
    None                   = 0,
    UserData               = 1,
    UserInitiated          = 5,
    UserWaiting            = 15,
    Commerce               = 16,
    DiscoveryAuthorization = 17,
};

}
