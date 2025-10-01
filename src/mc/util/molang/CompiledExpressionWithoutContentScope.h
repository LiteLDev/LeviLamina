#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/IComplexExpression.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangScriptArg;
namespace Bedrock { class StaticOptimizedString; }
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class Program; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithoutContentScope : public ::Molang::details::IComplexExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkae4a90;
    ::ll::UntypedStorage<8, 8>  mUnk611e1d;
    ::ll::UntypedStorage<2, 2>  mUnkf29fd3;
    ::ll::UntypedStorage<1, 1>  mUnk6e071f;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithoutContentScope& operator=(CompiledExpressionWithoutContentScope const&);
    CompiledExpressionWithoutContentScope(CompiledExpressionWithoutContentScope const&);
    CompiledExpressionWithoutContentScope();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    // vIndex: 2
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams& renderParams) const /*override*/;

    // vIndex: 3
    virtual bool isInitialized() const /*override*/;

    // vIndex: 4
    virtual ::Json::Value toJson() const /*override*/;

    // vIndex: 5
    virtual ::std::string getExpressionString() const /*override*/;

    // vIndex: 6
    virtual ::MolangVersion getMolangVersion() const /*override*/;

    // vIndex: 7
    virtual void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&) /*override*/;

    // vIndex: 8
    virtual void validateArrayVariables() const /*override*/;

    // vIndex: 9
    virtual bool isValid() const /*override*/;

    // vIndex: 10
    virtual bool isConstantValue() const /*override*/;

    // vIndex: 11
    virtual bool hasVariableAssignments() const /*override*/;

    // vIndex: 12
    virtual ::ExpressionOp getOp() const /*override*/;

    // vIndex: 13
    virtual bool needsToCompile() const /*override*/;

    // vIndex: 14
    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const /*override*/;

    // vIndex: 15
    virtual ::Molang::details::SourceTree* getSource() /*override*/;

    // vIndex: 0
    virtual ~CompiledExpressionWithoutContentScope() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompiledExpressionWithoutContentScope(
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams& renderParams) const;

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Json::Value $toJson() const;

    MCNAPI ::std::string $getExpressionString() const;

    MCNAPI void $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&);

    MCNAPI void $validateArrayVariables() const;

    MCNAPI bool $isValid() const;

    MCNAPI bool $isConstantValue() const;

    MCNAPI bool $hasVariableAssignments() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI ::std::optional<::MolangScriptArg> $getValueIfConstant() const;

    MCNAPI ::Molang::details::SourceTree* $getSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
