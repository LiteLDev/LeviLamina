#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionConflict {
public:
    // prevent constructor by default
    VersionConflict& operator=(VersionConflict const&);
    VersionConflict(VersionConflict const&);
    VersionConflict();

public:
    // NOLINTBEGIN
    // symbol: ??0VersionConflict@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI VersionConflict(struct Scripting::VersionConflict&&);

    // symbol: ??1VersionConflict@Scripting@@QEAA@XZ
    MCAPI ~VersionConflict();

    // NOLINTEND
};

}; // namespace Scripting
