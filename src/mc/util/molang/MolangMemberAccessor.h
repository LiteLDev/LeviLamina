#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberAccessor {
public:
    // prevent constructor by default
    MolangMemberAccessor& operator=(MolangMemberAccessor const&);
    MolangMemberAccessor(MolangMemberAccessor const&);
    MolangMemberAccessor();

public:
    // NOLINTBEGIN
    MCAPI ~MolangMemberAccessor();

    // NOLINTEND
};
