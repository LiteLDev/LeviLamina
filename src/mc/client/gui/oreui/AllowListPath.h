#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class AllowListPath {
public:
    // prevent constructor by default
    AllowListPath& operator=(AllowListPath const&);
    AllowListPath(AllowListPath const&);
    AllowListPath();

public:
    // NOLINTBEGIN
    MCAPI ~AllowListPath();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace OreUI
