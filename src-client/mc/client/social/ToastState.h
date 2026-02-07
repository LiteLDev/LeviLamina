#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ToastState : int {
    NoToast                = 0,
    ToastIdle              = 1,
    AnimateToastIn         = 2,
    ReadyToAnimateToastOut = 3,
    AnimateToastOut        = 4,
};
