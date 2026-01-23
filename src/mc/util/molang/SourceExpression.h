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

class SourceExpression : public ::Molang::details::IComplexExpression {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 144> mUnk33d9ea;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 152> mUnk33d9ea;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    SourceExpression();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual ::Json::Value toJson() const /*override*/;

    virtual ::std::string getExpressionString() const /*override*/;

    virtual ::MolangVersion getMolangVersion() const /*override*/;

    virtual void replaceArrayVariables(
        ::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap
    ) /*override*/;

    virtual void validateArrayVariables() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual bool isConstantValue() const /*override*/;

    virtual bool hasVariableAssignments() const /*override*/;

    virtual ::ExpressionOp getOp() const /*override*/;

    virtual bool needsToCompile() const /*override*/;

    virtual ::std::optional<::MolangScriptArg> getValueIfConstant() const /*override*/;

    virtual ::Molang::details::SourceTree* getSource() /*override*/;

    virtual ~SourceExpression() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit SourceExpression(::Molang::details::SourceTree node);

    MCNAPI SourceExpression(::MolangScriptArg value, ::ExpressionOp op);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Molang::details::SourceTree node);

    MCNAPI void* $ctor(::MolangScriptArg value, ::ExpressionOp op);
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
    $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

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
