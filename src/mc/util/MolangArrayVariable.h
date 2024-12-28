#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

struct MolangArrayVariable : public ::MolangHashStringVariable<::MolangArrayVariable> {
public:
    // prevent constructor by default
    MolangArrayVariable& operator=(MolangArrayVariable const&);
    MolangArrayVariable(MolangArrayVariable const&);
    MolangArrayVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangArrayVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
