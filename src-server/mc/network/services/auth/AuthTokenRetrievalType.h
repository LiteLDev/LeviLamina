#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

enum class AuthTokenRetrievalType : int {
    Get     = 0,
    Refresh = 1,
};

}
