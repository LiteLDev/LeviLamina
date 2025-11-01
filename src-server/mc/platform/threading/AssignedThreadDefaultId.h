#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum class AssignedThreadDefaultId : int {
    EmptyThreadId = 0,
    CurrentThreadId = 1,
};

}
