#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

enum class ArgConversionHint : uint {
    None = 0,
    NewUntrackedObject = 1,
};

}
