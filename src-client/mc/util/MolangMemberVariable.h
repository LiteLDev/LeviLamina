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
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangMemberVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
