#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

enum class DispatchResultCode : uchar {
    Cancelled = 1,
    Deferred  = 2,
};

}
