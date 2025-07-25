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
    // prevent constructor by default
    MolangContextVariable& operator=(MolangContextVariable const&);
    MolangContextVariable(MolangContextVariable const&);
    MolangContextVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangContextVariable(::HashedString value);

    MCFOLD ::MolangContextVariable& operator=(::MolangContextVariable&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString value);
    // NOLINTEND
};
