#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangQueryFunctionReturnType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

namespace MolangQuery {

struct LeashedEntityCount {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangScriptArg const&
    evaluateQuery(::RenderParams& renderParams, ::std::vector<::ExpressionNode> const&);

    MCNAPI static ::std::string_view getDocumentation();

    MCNAPI static ::std::initializer_list<int> const& getExperiments();

    MCNAPI static ::std::string_view getName();

    MCNAPI static ::std::string_view getQuerySetIdentifier();

    MCNAPI static ::MolangQueryFunctionReturnType getReturnType();
    // NOLINTEND
};

} // namespace MolangQuery
