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
MCNAPI void bindEquipmentSlot(::cereal::ReflectionCtx& ctx);

MCNAPI void bindFilterSubject(::cereal::ReflectionCtx& ctx);

MCNAPI void bindLevelSoundEventType(::cereal::ReflectionCtx& ctx);

MCNAPI bool
operator==(::SharedTypes::Legacy::BlockDescriptor const& a, ::SharedTypes::Legacy::BlockDescriptor const& b);

MCNAPI bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);
// NOLINTEND

} // namespace SharedTypes::Legacy
