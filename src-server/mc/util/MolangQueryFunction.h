#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangQueryFunctionReturnType.h"
#include "mc/versionless/molang/MolangVersion.h"

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
    ::ll::TypedStorage<8, 64, ::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)>> mAccessor;
    ::ll::TypedStorage<8, 32, ::std::string> mDocumentation;
    ::ll::TypedStorage<8, 8, uint64> mMinArgumentCount;
    ::ll::TypedStorage<8, 8, uint64> mMaxArgumentCount;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mExperiments;
    ::ll::TypedStorage<8, 8, ::MolangQueryFunctionReturnType> mFunctionReturnType;
    ::ll::TypedStorage<2, 2, ::MolangVersion> mFirstAvailableMolangVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion> mLastAvailableMolangVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangQueryFunction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangQueryFunction(::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor, ::std::string_view documentation, uint64 minArgumentCount, uint64 maxArgumentCount, ::std::initializer_list<int> const& experiments, ::MolangQueryFunctionReturnType functionReturnType);

    MCNAPI ~MolangQueryFunction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<::MolangScriptArg const&(::RenderParams&, ::std::vector<::ExpressionNode> const&)> accessor, ::std::string_view documentation, uint64 minArgumentCount, uint64 maxArgumentCount, ::std::initializer_list<int> const& experiments, ::MolangQueryFunctionReturnType functionReturnType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
