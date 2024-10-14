#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

struct MolangMemberAccessor : HashedString {

public:
    // NOLINTBEGIN
    MCAPI ~MolangMemberAccessor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
