#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::Poi::Block {

enum class OccupancyFilter : int {
    Any        = 0,
    Full       = 1,
    HasVacancy = 2,
};

}
