#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangContextVariable {

public:
    // prevent constructor by default
    MolangContextVariable& operator=(MolangContextVariable const&) = delete;
    MolangContextVariable(MolangContextVariable const&)            = delete;
    MolangContextVariable()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MolangContextVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangContextVariable(class HashedString const&);
    /**
     * @symbol ??1MolangContextVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangContextVariable();
    // NOLINTEND
};
