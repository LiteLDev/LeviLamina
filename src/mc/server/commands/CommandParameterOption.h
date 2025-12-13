#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandParameterOption : uchar {
    None                      = 0,
    EnumAutocompleteExpansion = 1,
    HasSemanticConstraint     = 2,
    EnumAsChainedCommand      = 4,
};
