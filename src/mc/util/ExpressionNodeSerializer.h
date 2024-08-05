#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::Legacy { struct ExpressionNode; }
// clang-format on

namespace ExpressionNodeSerializer {
// NOLINTBEGIN
MCAPI void fromPuv(class ExpressionNode&, struct Puv::Legacy::ExpressionNode const&);

MCAPI struct Puv::Legacy::ExpressionNode toPuv(class ExpressionNode const&);
// NOLINTEND

}; // namespace ExpressionNodeSerializer
