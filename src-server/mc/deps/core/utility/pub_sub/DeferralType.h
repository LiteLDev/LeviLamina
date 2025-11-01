#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

enum class DeferralType : int {
    KeepAll            = 0,
    KeepLatest         = 1,
    ExecuteImmediately = 2,
};

}
