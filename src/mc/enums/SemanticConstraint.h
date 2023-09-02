#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SemanticConstraint : schar {
    None                        = 0x0,
    RequiresCheatsEnabled       = 0x1,
    RequiresElevatedPermissions = 0x2,
    RequiresHostPermissions     = 0x4,
    RequiresAllowAliases        = 0x8,
    VALUE_MASK                  = 0xF,
};
