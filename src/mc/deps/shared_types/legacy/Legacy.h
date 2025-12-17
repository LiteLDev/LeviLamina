#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
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
