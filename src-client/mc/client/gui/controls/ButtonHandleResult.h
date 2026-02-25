#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ButtonHandleResult : uint {
    NotHandled         = 0,
    Handled            = 1,
    HandledNotConsumed = 2,
};
