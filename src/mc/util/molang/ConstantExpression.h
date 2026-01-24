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
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class ConstantExpression : public ::Molang::details::IComplexExpression {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 88> mUnk181be6;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 96> mUnk181be6;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantExpression& operator=(ConstantExpression const&);
    ConstantExpression(ConstantExpression const&);
    ConstantExpression();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual ::Json::Value toJson() const /*override*/;

    virtual ::std::string getExpressionString() const /*override*/;

    virtual ::MolangVersion getMolangVersion() const /*override*/;

    virtual void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&) /*override*/;

    virtual void validateArrayVariables() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual bool isConstantValue() const /*override*/;

    virtual bool hasVariableAssignments() const /*override*/;

    virtual ::ExpressionOp getOp() const /*override*/;

    virtual bool needsToCompile() const /*override*/;

    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const /*override*/;

    virtual ::Molang::details::SourceTree* getSource() /*override*/;

    virtual ~ConstantExpression() /*override*/ = default;
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
