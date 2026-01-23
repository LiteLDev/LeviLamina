#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleFilters {

enum class FilterResult : int {
    AllowDependency  = 0,
    RejectDependency = 1,
    RejectPlugin     = 2,
};

}
