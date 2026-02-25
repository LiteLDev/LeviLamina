#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class CreateWorldError : int {
    NoDiskSpace       = 0,
    MissingContentKey = 1,
};

}
