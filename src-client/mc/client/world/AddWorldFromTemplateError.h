#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class AddWorldFromTemplateError : uchar {
    IncorrectWorldId = 0,
    MissingTemplate  = 1,
    LoadingError     = 2,
};

}
