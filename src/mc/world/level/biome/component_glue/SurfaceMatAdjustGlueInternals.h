#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class HashedString;
struct MolangJsonContainer;
// clang-format on

namespace SurfaceMatAdjustGlueInternals {
// functions
// NOLINTBEGIN
MCAPI bool resolveAndVerifyMolang(
    ::std::optional<::ExpressionNode>& expressionNode,
    ::MolangJsonContainer const&       molangJson,
    ::MolangVersion                    molangVersion,
    ::gsl::span<::HashedString const>  querySetID
);
// NOLINTEND

} // namespace SurfaceMatAdjustGlueInternals
