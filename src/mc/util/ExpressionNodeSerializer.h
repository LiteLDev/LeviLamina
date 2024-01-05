#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ExpressionNodeSerializer { struct ExpressionNodeProxy; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ExpressionNodeSerializer {
// NOLINTBEGIN
// symbol: ?fromFloat@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@M@Z
MCAPI void fromFloat(class ExpressionNode& node, float value);

// symbol: ?fromProxy@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@UExpressionNodeProxy@1@@Z
MCAPI void fromProxy(class ExpressionNode& node, struct ExpressionNodeSerializer::ExpressionNodeProxy proxy);

// symbol:
// ?fromString@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBedrockLoadContext@@@Z
MCAPI void
fromString(class ExpressionNode& node, std::string const& expression, class BedrockLoadContext const& context);

// symbol: ?toProxy@ExpressionNodeSerializer@@YA?AUExpressionNodeProxy@1@AEBVExpressionNode@@@Z
MCAPI struct ExpressionNodeSerializer::ExpressionNodeProxy toProxy(class ExpressionNode const& node);
// NOLINTEND

}; // namespace ExpressionNodeSerializer
