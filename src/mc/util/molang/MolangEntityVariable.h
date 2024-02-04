#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangVariableIndex.h"

struct MolangEntityVariable : HashedString {
public:
    MolangVariableIndex mMolangVariableIndex;

public:
    // NOLINTBEGIN
    // symbol: ??0MolangEntityVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangEntityVariable(class HashedString const& value);

    // symbol: ??1MolangEntityVariable@@QEAA@XZ
    MCAPI ~MolangEntityVariable();

    // NOLINTEND
};
