#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CodebuilderComponent {
public:
    // prevent constructor by default
    CodebuilderComponent& operator=(CodebuilderComponent const&);
    CodebuilderComponent(CodebuilderComponent const&);
    CodebuilderComponent();

public:
    // NOLINTBEGIN
    // symbol: ?resetCodeStatus@CodebuilderComponent@@QEAAXXZ
    MCAPI void resetCodeStatus();

    // NOLINTEND
};
