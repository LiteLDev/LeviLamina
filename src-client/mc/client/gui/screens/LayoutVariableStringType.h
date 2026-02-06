#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LayoutVariableStringType : int {
    VariableOnly                 = 0,
    IncludeRule                  = 1,
    IncludeAllDependantVariables = 2,
};
