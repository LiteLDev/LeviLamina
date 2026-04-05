#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

struct NamedMolangScript {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>   mName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mScript;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    NamedMolangScript(NamedMolangScript const&);
    NamedMolangScript();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    NamedMolangScript();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NamedMolangScript(::HashedString const& name, ::ExpressionNode const& script);

#ifdef LL_PLAT_S
    MCNAPI ::NamedMolangScript& operator=(::NamedMolangScript const&);
#endif

    MCNAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& name, ::ExpressionNode const& script);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
