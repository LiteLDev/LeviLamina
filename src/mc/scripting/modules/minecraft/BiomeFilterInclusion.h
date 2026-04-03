#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptBiomeFilterUtils {

enum class BiomeFilterInclusion : uchar {
    Unspecified = 0,
    Included    = 1,
    Excluded    = 2,
};

}
