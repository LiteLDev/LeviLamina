#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class FileAccessType : int {
    ReadOnly = 0,
    ReadWrite = 1,
    Flush = 2,
};

}
