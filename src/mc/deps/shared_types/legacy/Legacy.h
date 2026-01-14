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
MCAPI void bindEquipmentSlot(::cereal::ReflectionCtx& ctx);

MCAPI void bindFilterSubject(::cereal::ReflectionCtx& ctx);

MCAPI void bindLevelSoundEventType(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(::SharedTypes::Legacy::BlockDescriptor const& a, ::SharedTypes::Legacy::BlockDescriptor const& b);

MCFOLD bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);
// NOLINTEND

} // namespace SharedTypes::Legacy
