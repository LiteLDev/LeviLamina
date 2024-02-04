#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangVariableIndex.h"

struct MolangContextVariable : HashedString {
public:
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    // symbol: ??0MolangContextVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangContextVariable(class HashedString const& value);

    // symbol: ??1MolangContextVariable@@QEAA@XZ
    MCAPI ~MolangContextVariable();

    // NOLINTEND
};
