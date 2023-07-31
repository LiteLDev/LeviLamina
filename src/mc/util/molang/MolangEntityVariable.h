#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEntityVariable {

public:
    // prevent constructor by default
    MolangEntityVariable& operator=(MolangEntityVariable const&) = delete;
    MolangEntityVariable(MolangEntityVariable const&)            = delete;
    MolangEntityVariable()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MolangEntityVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangEntityVariable(class HashedString const&);
    /**
     * @symbol ??1MolangEntityVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangEntityVariable();
    // NOLINTEND
};
