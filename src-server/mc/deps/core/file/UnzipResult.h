#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

enum class UnzipResult : int {
    Ok = 0,
    UnzipError = 1,
    ParamError = 2,
    BadZipFile = 3,
    InternalError = 4,
    CRCError = 5,
    DirectoryDepthError = 6,
};

}
