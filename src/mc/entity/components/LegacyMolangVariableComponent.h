#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyMolangVariableComponent {
public:
    // prevent constructor by default
    LegacyMolangVariableComponent& operator=(LegacyMolangVariableComponent const&);
    LegacyMolangVariableComponent(LegacyMolangVariableComponent const&);
    LegacyMolangVariableComponent();
};
