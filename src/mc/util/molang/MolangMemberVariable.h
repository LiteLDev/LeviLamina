#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberVariable {

public:
    // prevent constructor by default
    MolangMemberVariable& operator=(MolangMemberVariable const&) = delete;
    MolangMemberVariable(MolangMemberVariable const&)            = delete;
    MolangMemberVariable()                                       = delete;

public:
    /**
     * @symbol ??1MolangMemberVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberVariable(); // NOLINT
};
