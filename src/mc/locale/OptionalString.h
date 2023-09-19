#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&);
    OptionalString(OptionalString const&);
    OptionalString();

public:
    // NOLINTBEGIN
    // symbol: ??1OptionalString@@QEAA@XZ
    MCAPI ~OptionalString();

    // NOLINTEND
};
