#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableIndex.h"

struct MolangTempVariable : HashedString {
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangTempVariable(class HashedString const& value);

    MCAPI ~MolangTempVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& value);

    MCAPI void dtor$();

    // NOLINTEND
};
