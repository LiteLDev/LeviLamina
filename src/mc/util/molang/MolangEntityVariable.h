#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEntityVariable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGENTITYVARIABLE
public:
    MolangEntityVariable& operator=(MolangEntityVariable const&) = delete;
    MolangEntityVariable(MolangEntityVariable const&)            = delete;
    MolangEntityVariable()                                       = delete;
#endif

public:
    /**
     * @symbol ??0MolangEntityVariable\@\@QEAA\@AEBVHashedString\@\@\@Z
     */
    MCAPI MolangEntityVariable(class HashedString const&);
    /**
     * @symbol ??1MolangEntityVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangEntityVariable();
};
