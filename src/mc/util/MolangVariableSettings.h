#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/MolangVariableIndex.h"

struct MolangVariableSettings {
    enum AccessSpecifier : int {
        Private = 0,
        Public  = 1,
    };
    MolangVariableIndex mIndex;
    AccessSpecifier     mAccessSpecifier;
};
