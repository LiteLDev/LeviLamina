#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

namespace MolangOpDefinitions {
// functions
// NOLINTBEGIN
MCAPI ::ExpressionOp getClosingOp(::ExpressionOp op);

#ifdef LL_PLAT_S
MCAPI ::AllExperiments getExperiment(::ExpressionOp op);
#endif

MCAPI char const* getFriendlyName(::ExpressionOp op);

MCAPI ::std::string_view getToken(::ExpressionOp op);

MCAPI bool isAllowed(::ExpressionOp op, ::Experiments const& experiments);

#ifdef LL_PLAT_C
MCAPI bool isResourceVariable(::ExpressionOp op);
#endif

MCAPI uint64 maxChildren(::ExpressionOp op);

MCAPI uint64 minChildren(::ExpressionOp op);
// NOLINTEND

} // namespace MolangOpDefinitions
