#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SemanticConstraint : uchar {
    // bitfield representation
    None = 0,
    RequiresCheatsEnabled = 1 << 0,
    RequiresElevatedPermissions = 1 << 1,
    RequiresHostPermissions = 1 << 2,
    RequiresAllowAliases = 1 << 3,
    ValueMask = RequiresCheatsEnabled | RequiresElevatedPermissions | RequiresHostPermissions | RequiresAllowAliases,
};
