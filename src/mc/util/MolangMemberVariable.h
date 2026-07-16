#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct MolangScriptArg;

struct MolangMemberVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mData;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mData;
#endif
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~MolangMemberVariable();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
