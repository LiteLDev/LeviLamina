#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/ExpressionNode.h"
#include "mc/util/molang/MolangQueryFunctionReturnType.h"

struct MolangScriptArg;

struct MolangQueryFunctionPtr {
    using QueryFunctionAccessor =
        std::function<MolangScriptArg const&(RenderParams&, std::vector<ExpressionNode> const&)>;

    MolangQueryFunctionReturnType mReturnType;       // this+0x0
    QueryFunctionAccessor const*  mQueryFunctionPtr; // this+0x8
    HashedString                  mName;             // this+0x10

public:
    // NOLINTBEGIN
    MCAPI ~MolangQueryFunctionPtr();

    // NOLINTEND
};
