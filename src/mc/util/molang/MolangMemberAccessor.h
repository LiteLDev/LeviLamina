#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberAccessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGMEMBERACCESSOR
public:
    MolangMemberAccessor& operator=(MolangMemberAccessor const&) = delete;
    MolangMemberAccessor(MolangMemberAccessor const&)            = delete;
    MolangMemberAccessor()                                       = delete;
#endif

public:
    /**
     * @symbol ??1MolangMemberAccessor\@\@QEAA\@XZ
     */
    MCAPI ~MolangMemberAccessor();
};
