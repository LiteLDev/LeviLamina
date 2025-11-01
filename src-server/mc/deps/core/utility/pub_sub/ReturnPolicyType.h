#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

enum class ReturnPolicyType : int {
    Aggregate = 0,
    Discard = 1,
};

}
