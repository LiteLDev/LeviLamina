#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefinitionModifier {
public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);
    DefinitionModifier();

public:
    // NOLINTBEGIN
    MCAPI DefinitionModifier(struct DefinitionModifier const&);

    MCAPI ~DefinitionModifier();

    // NOLINTEND
};
