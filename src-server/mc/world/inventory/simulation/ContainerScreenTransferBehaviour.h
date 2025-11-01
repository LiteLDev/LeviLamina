#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerScreenTransferBehaviour : int {
    CanSwap = 0,
    CannotSwap = 1,
    AllowPartialTransfer = 2,
};
