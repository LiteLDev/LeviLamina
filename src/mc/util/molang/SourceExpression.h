#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/IComplexExpression.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
// clang-format on

namespace Molang::details {

class SourceExpression : public ::Molang::details::IComplexExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mUnk47be62;
    // NOLINTEND

public:
    // prevent constructor by default
    SourceExpression& operator=(SourceExpression const&);
    SourceExpression(SourceExpression const&);
    SourceExpression();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    // vIndex: 2
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const /*override*/;

    // vIndex: 3
    virtual bool isInitialized() const /*override*/;

    // vIndex: 4
    virtual ::Json::Value toJson() const /*override*/;

    // vIndex: 5
    virtual ::std::string getExpressionString() const /*override*/;

    // vIndex: 6
    virtual ::MolangVersion getMolangVersion() const /*override*/;

    // vIndex: 7
    virtual void replaceResourceVariables(
        ::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable
    ) /*override*/;

    // vIndex: 8
    virtual void replaceArrayVariables(
        ::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap
    ) /*override*/;

    // vIndex: 9
    virtual void validateArrayVariables() const /*override*/;

    // vIndex: 10
    virtual bool isValid() const /*override*/;

    // vIndex: 11
    virtual bool isConstantValue() const /*override*/;

    // vIndex: 12
    virtual bool hasVariableAssignments() const /*override*/;

    // vIndex: 13
    virtual ::ExpressionOp getOp() const /*override*/;

    // vIndex: 14
    virtual bool needsToCompile() const /*override*/;

    // vIndex: 15
    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const /*override*/;

    // vIndex: 16
    virtual ::Molang::details::ExpressionNode* getSource() /*override*/;

    // vIndex: 0
    virtual ~SourceExpression() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;

    MCNAPI ::MolangScriptArg const& $evalGeneric(::RenderParams&) const;

    MCNAPI bool $isInitialized() const;

    MCNAPI ::Json::Value $toJson() const;

    MCNAPI ::std::string $getExpressionString() const;

    MCNAPI ::MolangVersion $getMolangVersion() const;

    MCNAPI void
    $replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);

    MCNAPI void
    $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

    MCNAPI void $validateArrayVariables() const;

    MCNAPI bool $isValid() const;

    MCNAPI bool $isConstantValue() const;

    MCNAPI bool $hasVariableAssignments() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI ::std::optional<::MolangScriptArg> $getValueIfConstant() const;

    MCNAPI ::Molang::details::ExpressionNode* $getSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
