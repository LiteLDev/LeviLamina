#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangEntityVariable : public ::MolangHashStringVariable<::MolangEntityVariable> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mMolangVariableIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangEntityVariable& operator=(MolangEntityVariable const&);
    MolangEntityVariable(MolangEntityVariable const&);
    MolangEntityVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangEntityVariable(::HashedString const& value);

    MCAPI ~MolangEntityVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
