#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
namespace SharedTypes::Legacy { struct ExpressionNode; }
// clang-format on

namespace ExpressionNodeSerializer {
// functions
// NOLINTBEGIN
MCAPI void fromSharedTypes(::ExpressionNode& instance, ::SharedTypes::Legacy::ExpressionNode const& expr);

MCAPI ::SharedTypes::Legacy::ExpressionNode toSharedTypes(::ExpressionNode const& node);
// NOLINTEND

} // namespace ExpressionNodeSerializer
