#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

enum class NativeObjectOwnership : int {
    Empty  = 0,
    Weak   = 1,
    Strong = 2,
};

}
