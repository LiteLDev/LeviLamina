#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/CompiledExpressionWithoutContentScope.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
namespace Bedrock { class StaticOptimizedString; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class Program; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithContentScope : public ::Molang::details::CompiledExpressionWithoutContentScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk929448;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithContentScope& operator=(CompiledExpressionWithContentScope const&);
    CompiledExpressionWithContentScope(CompiledExpressionWithContentScope const&);
    CompiledExpressionWithContentScope();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    // vIndex: 2
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams& params) const /*override*/;

    // vIndex: 0
    virtual ~CompiledExpressionWithContentScope() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompiledExpressionWithContentScope(
        ::Molang::details::Program       instructions,
        ::Bedrock::StaticOptimizedString expressionString,
        ::MolangVersion                  version,
        bool                             hasVariableAssignments
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Molang::details::Program       instructions,
        ::Bedrock::StaticOptimizedString expressionString,
        ::MolangVersion                  version,
        bool                             hasVariableAssignments
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams& params) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
