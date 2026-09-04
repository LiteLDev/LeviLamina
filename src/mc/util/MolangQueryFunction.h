#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/MolangQueryFunctionReturnType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct MolangQueryFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>>
                                                              mAccessor;
    ::ll::TypedStorage<8, 32, ::std::string>                  mDocumentation;
    ::ll::TypedStorage<8, 8, uint64>                          mMinArgumentCount;
    ::ll::TypedStorage<8, 8, uint64>                          mMaxArgumentCount;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>             mExperiments;
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mFunctionReturnType;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mFirstAvailableMolangVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                 mLastAvailableMolangVersion;
    // NOLINTEND
};
