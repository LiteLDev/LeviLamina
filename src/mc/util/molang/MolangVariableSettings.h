#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangVariableSettings {
public:
    // prevent constructor by default
    MolangVariableSettings& operator=(MolangVariableSettings const&);
    MolangVariableSettings(MolangVariableSettings const&);
    MolangVariableSettings();
};
