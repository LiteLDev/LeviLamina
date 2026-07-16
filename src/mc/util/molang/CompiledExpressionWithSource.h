#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/CompiledExpressionWithContentScope.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithSource : public ::Molang::details::CompiledExpressionWithContentScope {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 144> mUnk36c341;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 152> mUnk36c341;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithSource& operator=(CompiledExpressionWithSource const&);
    CompiledExpressionWithSource(CompiledExpressionWithSource const&);
    CompiledExpressionWithSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    virtual void
    replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>&) /*override*/;

    virtual void validateArrayVariables() const /*override*/;

    virtual ::ExpressionOp getOp() const /*override*/;

    virtual bool needsToCompile() const /*override*/;

    virtual ::Molang::details::SourceTree* getSource() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Molang::details
