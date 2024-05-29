#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::Legacy { struct ExpressionNode; }
// clang-format on

namespace ExpressionNodeSerializer {
// NOLINTBEGIN
// symbol: ?fromPuv@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@AEBU2Legacy@Puv@@@Z
MCAPI void fromPuv(class ExpressionNode&, struct Puv::Legacy::ExpressionNode const&);

// symbol: ?toPuv@ExpressionNodeSerializer@@YA?AUExpressionNode@Legacy@Puv@@AEBV2@@Z
MCAPI struct Puv::Legacy::ExpressionNode toPuv(class ExpressionNode const&);
// NOLINTEND

}; // namespace ExpressionNodeSerializer
