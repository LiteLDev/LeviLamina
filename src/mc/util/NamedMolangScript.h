#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class HashedString;
// clang-format on

struct NamedMolangScript {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnke67d89;
    ::ll::UntypedStorage<8, 216> mUnkc8da3a;
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
