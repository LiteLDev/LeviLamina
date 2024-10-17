#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

struct ItemTag : public HashedString {
public:
    // NOLINTBEGIN
    MCAPI ~ItemTag();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
