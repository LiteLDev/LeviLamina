#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

struct MolangContextVariableMapWithCleanup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MolangEvalParams&> mEvalParams;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangContextVariableMapWithCleanup& operator=(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MolangContextVariableMapWithCleanup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
