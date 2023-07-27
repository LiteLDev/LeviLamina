#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandParameterOption : char {
    None                      = 0x0,
    EnumAutocompleteExpansion = 0x1,
    HasSemanticConstraint     = 0x2,
    EnumAsChainedCommand      = 0x4,
};
