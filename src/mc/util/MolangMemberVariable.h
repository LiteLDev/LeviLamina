#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangScriptArg.h"

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
    MolangMemberVariable();

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
