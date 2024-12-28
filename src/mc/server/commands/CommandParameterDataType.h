#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandParameterDataType : int {
    Basic             = 0,
    Enum              = 1,
    SoftEnum          = 2,
    Postfix           = 3,
    ChainedSubcommand = 4,
};
