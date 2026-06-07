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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
