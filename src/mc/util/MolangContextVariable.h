#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableIndex.h"

struct MolangContextVariable : HashedString {
public:
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangContextVariable(class HashedString const& value);

    MCAPI ~MolangContextVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& value);

    MCAPI void dtor$();

    // NOLINTEND
};
