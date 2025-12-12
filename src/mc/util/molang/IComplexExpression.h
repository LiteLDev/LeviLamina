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
    virtual ~IComplexExpression() = default;

    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const = 0;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const = 0;

    virtual bool isInitialized() const = 0;

    virtual ::Json::Value toJson() const = 0;

    virtual ::std::string getExpressionString() const = 0;

    virtual ::MolangVersion getMolangVersion() const = 0;

    virtual void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&) = 0;

    virtual void validateArrayVariables() const = 0;

    virtual bool isValid() const = 0;

    virtual bool isConstantValue() const = 0;

    virtual bool hasVariableAssignments() const = 0;

    virtual ::ExpressionOp getOp() const = 0;

    virtual bool needsToCompile() const = 0;

    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const = 0;

    virtual ::Molang::details::SourceTree* getSource() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Molang::details
