#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::Legacy { struct ExpressionNode; }
// clang-format on

namespace ExpressionNodeSerializer {
// NOLINTBEGIN
MCAPI void fromPuv(class ExpressionNode& instance, struct Puv::Legacy::ExpressionNode const& expr);

MCAPI struct Puv::Legacy::ExpressionNode toPuv(class ExpressionNode const& node);
// NOLINTEND

}; // namespace ExpressionNodeSerializer
