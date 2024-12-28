#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

enum class ZipResult : int {
    Ok            = 0,
    ZipError      = 1,
    ParamError    = 2,
    BadZipFile    = 3,
    InternalError = 4,
};

}
