#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangTempVariable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGTEMPVARIABLE
public:
    MolangTempVariable& operator=(MolangTempVariable const&) = delete;
    MolangTempVariable(MolangTempVariable const&)            = delete;
    MolangTempVariable()                                     = delete;
#endif

public:
    /**
     * @symbol ??0MolangTempVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangTempVariable(class HashedString const&);
    /**
     * @symbol ??1MolangTempVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangTempVariable();
};
