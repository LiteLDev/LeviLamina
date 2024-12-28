#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerScreenAutoplaceBehaviour : int {
    TryPlaceAll   = 0,
    MustPlaceAll  = 1,
    DropRemainder = 2,
};
