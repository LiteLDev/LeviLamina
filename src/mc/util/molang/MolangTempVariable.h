#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangVariableIndex.h"

struct MolangTempVariable : HashedString {
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    // symbol: ??0MolangTempVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangTempVariable(class HashedString const& value);

    // symbol: ??1MolangTempVariable@@QEAA@XZ
    MCAPI ~MolangTempVariable();

    // NOLINTEND
};
