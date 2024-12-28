#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerValidationCaller : int {
    Client       = 0,
    Server       = 1,
    ServerScript = 2,
};
