#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangContextVariable : public ::MolangHashStringVariable<::MolangContextVariable> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mMolangVariableIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangContextVariable(::HashedString const& value);

    MCAPI ~MolangContextVariable();
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
