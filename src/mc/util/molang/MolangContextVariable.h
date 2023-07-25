#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangContextVariable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGCONTEXTVARIABLE
public:
    MolangContextVariable& operator=(MolangContextVariable const&) = delete;
    MolangContextVariable(MolangContextVariable const&)            = delete;
    MolangContextVariable()                                        = delete;
#endif

public:
    /**
     * @symbol ??0MolangContextVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangContextVariable(class HashedString const&);
    /**
     * @symbol ??1MolangContextVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangContextVariable();
};
