#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangContextVariableMapWithCleanup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka53d0c;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangContextVariableMapWithCleanup& operator=(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangContextVariableMapWithCleanup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
