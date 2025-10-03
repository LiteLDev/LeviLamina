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
MCNAPI void fromSharedTypes(::ExpressionNode& instance, ::SharedTypes::Legacy::ExpressionNode const& expr);

MCNAPI ::std::vector<::ExpressionNode>
fromSharedTypesVector(::std::vector<::SharedTypes::Legacy::ExpressionNode> const& v);

MCNAPI ::SharedTypes::Legacy::ExpressionNode toSharedTypes(::ExpressionNode const& node);
// NOLINTEND

} // namespace ExpressionNodeSerializer
