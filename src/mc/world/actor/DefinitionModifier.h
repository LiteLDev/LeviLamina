#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefinitionModifier {
public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);
    DefinitionModifier();

public:
    // NOLINTBEGIN
    // symbol: ??0DefinitionModifier@@QEAA@AEBU0@@Z
    MCAPI DefinitionModifier(struct DefinitionModifier const&);

    // symbol: ??1DefinitionModifier@@QEAA@XZ
    MCAPI ~DefinitionModifier();

    // NOLINTEND
};
