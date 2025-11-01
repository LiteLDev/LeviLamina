#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Application {

enum class ThreadOwnerBehavior : int {
    Assert = 0,
    Log = 1,
};

}
