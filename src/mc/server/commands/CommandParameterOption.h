#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandParameterOption : uchar {
    // bitfield representation
    None                      = 0,
    EnumAutocompleteExpansion = 1 << 0,
    HasSemanticConstraint     = 1 << 1,
    EnumAsChainedCommand      = 1 << 2,
};
