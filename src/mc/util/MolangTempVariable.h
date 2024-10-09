#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangVariableIndex.h"

struct MolangTempVariable : HashedString {
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangTempVariable(class HashedString const& value);

    MCAPI ~MolangTempVariable();

    // NOLINTEND
};
