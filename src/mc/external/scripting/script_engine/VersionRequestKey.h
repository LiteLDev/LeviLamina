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
    MCAPI ~VersionRequestKey();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
