#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class RegisterModelStatus : int {
    Success                    = 0,
    ModelDataAlreadyRegistered = 1,
    ModelNameAlreadyRegistered = 2,
    InvalidModel               = 3,
    DocumentNotCreated         = 4,
};

}
