#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/ExpressionNode.h"

struct NamedMolangScript {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>    mName;
    ::ll::TypedStorage<8, 216, ::ExpressionNode> mScript;
    // NOLINTEND

public:
    // prevent constructor by default
    NamedMolangScript& operator=(NamedMolangScript const&);
    NamedMolangScript();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NamedMolangScript(::NamedMolangScript const&);

    MCNAPI NamedMolangScript(::HashedString const& name, ::ExpressionNode const& script);

    MCNAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NamedMolangScript const&);

    MCNAPI void* $ctor(::HashedString const& name, ::ExpressionNode const& script);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
