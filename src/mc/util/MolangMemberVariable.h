#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangScriptArg;
// clang-format on

struct MolangMemberVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>    mName;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangMemberVariable& operator=(MolangMemberVariable const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MolangMemberVariable(::MolangMemberVariable const&);

    MCAPI ~MolangMemberVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MolangMemberVariable const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
