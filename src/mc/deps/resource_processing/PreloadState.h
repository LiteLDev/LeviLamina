#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class PreloadState : int {
    ExistsAndContentsPreloaded    = 0,
    ExistsAndContentsNotPreloaded = 1,
    DoesNotExist                  = 2,
    ExistenceUndetermined         = 3,
};

}
