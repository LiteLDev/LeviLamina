#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberVariable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGMEMBERVARIABLE
public:
    MolangMemberVariable& operator=(MolangMemberVariable const&) = delete;
    MolangMemberVariable(MolangMemberVariable const&)            = delete;
    MolangMemberVariable()                                       = delete;
#endif

public:
    /**
     * @symbol ??1MolangMemberVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberVariable();
};
