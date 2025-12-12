#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct MolangScriptArg;
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class IComplexExpression {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IComplexExpression() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const = 0;

    // vIndex: 2
    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const = 0;

    // vIndex: 3
    virtual bool isInitialized() const = 0;

    // vIndex: 4
    virtual ::Json::Value toJson() const = 0;

    // vIndex: 5
    virtual ::std::string getExpressionString() const = 0;

    // vIndex: 6
    virtual ::MolangVersion getMolangVersion() const = 0;

    // vIndex: 7
    virtual void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&) = 0;

    // vIndex: 8
    virtual void validateArrayVariables() const = 0;

    // vIndex: 9
    virtual bool isValid() const = 0;

    // vIndex: 10
    virtual bool isConstantValue() const = 0;

    // vIndex: 11
    virtual bool hasVariableAssignments() const = 0;

    // vIndex: 12
    virtual ::ExpressionOp getOp() const = 0;

    // vIndex: 13
    virtual bool needsToCompile() const = 0;

    // vIndex: 14
    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const = 0;

    // vIndex: 15
    virtual ::Molang::details::SourceTree* getSource() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Molang::details
