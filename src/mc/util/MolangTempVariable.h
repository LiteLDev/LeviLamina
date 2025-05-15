#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangTempVariable : public ::MolangHashStringVariable<::MolangTempVariable> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mMolangVariableIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangTempVariable& operator=(MolangTempVariable const&);
    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangTempVariable(::HashedString const& value);

    MCFOLD ::MolangTempVariable& operator=(::MolangTempVariable&&);

    MCAPI ~MolangTempVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
