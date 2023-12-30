#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionRequestKey {
public:
    // prevent constructor by default
    VersionRequestKey& operator=(VersionRequestKey const&);
    VersionRequestKey(VersionRequestKey const&);
    VersionRequestKey();

public:
    // NOLINTBEGIN
    // symbol: ??1VersionRequestKey@Scripting@@QEAA@XZ
    MCAPI ~VersionRequestKey();

    // NOLINTEND
};

}; // namespace Scripting
