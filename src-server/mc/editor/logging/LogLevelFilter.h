#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class LogLevelFilter : int {
    // bitfield representation
    None = 0,
    Info = 1 << 0,
    Warning = 1 << 1,
    Error = 1 << 2,
    Debug = 1 << 3,
    All = Info | Warning | Error | Debug,
};

}
