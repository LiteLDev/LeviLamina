#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/CompiledExpressionWithoutContentScope.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
namespace Molang::details { class IComplexExpression; }
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
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    virtual ::MolangScriptArg const& evalGeneric(::RenderParams&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Molang::details
