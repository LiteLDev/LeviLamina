#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

namespace MolangQuery {

struct IsRidingAnyEntityOfType {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangScriptArg const&
    evaluateQuery(::RenderParams& renderParams, ::std::vector<::ExpressionNode> const& arguments);
    // NOLINTEND
};

} // namespace MolangQuery
