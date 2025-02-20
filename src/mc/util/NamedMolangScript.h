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
    MCAPI NamedMolangScript(::NamedMolangScript const&);

    MCAPI NamedMolangScript(::HashedString const& name, ::ExpressionNode const& script);

    MCAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::NamedMolangScript const&);

    MCFOLD void* $ctor(::HashedString const& name, ::ExpressionNode const& script);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
