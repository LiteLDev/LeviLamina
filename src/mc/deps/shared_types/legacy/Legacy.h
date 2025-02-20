#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {
// functions
// NOLINTBEGIN
MCAPI void bindLevelSoundEventType(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(::SharedTypes::Legacy::BlockDescriptor const& a, ::SharedTypes::Legacy::BlockDescriptor const& b);

MCFOLD bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);
// NOLINTEND

} // namespace SharedTypes::Legacy
