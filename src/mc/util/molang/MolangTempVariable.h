#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangTempVariable {

public:
    // prevent constructor by default
    MolangTempVariable& operator=(MolangTempVariable const&) = delete;
    MolangTempVariable(MolangTempVariable const&)            = delete;
    MolangTempVariable()                                     = delete;

public:
    /**
     * @symbol ??0MolangTempVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangTempVariable(class HashedString const&); // NOLINT
    /**
     * @symbol ??1MolangTempVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangTempVariable(); // NOLINT
};
