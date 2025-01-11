#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangQueryFunctionReturnType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class HashedString;
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct MolangQueryFunctionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mReturnType;
    ::ll::TypedStorage<
        8,
        8,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> const*>
                                              mQueryFunctionPtr;
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangQueryFunctionPtr();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
