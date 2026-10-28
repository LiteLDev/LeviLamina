#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class UpdateModelStatus : int {
    Success            = 0,
    ModelNotRegistered = 1,
    DocumentNotCreated = 2,
};

}
