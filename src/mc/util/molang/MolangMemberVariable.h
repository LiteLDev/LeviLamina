#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/MolangScriptArg.h"

struct MolangScriptArg;

struct MolangMemberVariable {
    HashedString    mName;
    MolangScriptArg mData;

public:
    // NOLINTBEGIN
    // symbol: ??1MolangMemberVariable@@QEAA@XZ
    MCAPI ~MolangMemberVariable();

    // NOLINTEND
};
