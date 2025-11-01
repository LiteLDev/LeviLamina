#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

enum class FunctionToCall : uchar {
    RelocateFromTo = 0,
    Dispose = 1,
};

}
