#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberAccessor {

public:
    // prevent constructor by default
    MolangMemberAccessor& operator=(MolangMemberAccessor const&) = delete;
    MolangMemberAccessor(MolangMemberAccessor const&)            = delete;
    MolangMemberAccessor()                                       = delete;

public:
    /**
     * @symbol ??1MolangMemberAccessor\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberAccessor(); // NOLINT
};
