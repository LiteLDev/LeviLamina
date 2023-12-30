#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct UUID {
public:
    // prevent constructor by default
    UUID& operator=(UUID const&);
    UUID(UUID const&);
    UUID();

public:
    // NOLINTBEGIN
    // symbol: ??1UUID@Scripting@@QEAA@XZ
    MCAPI ~UUID();

    // NOLINTEND
};

}; // namespace Scripting
