#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {
// functions
// NOLINTBEGIN
MCAPI void bindActorDamageCause(::cereal::ReflectionCtx& ctx);

MCAPI void bindEquipmentSlot(::cereal::ReflectionCtx& ctx);

MCAPI void bindFilterSubject(::cereal::ReflectionCtx& ctx);

MCAPI void bindLevelSoundEventType(::cereal::ReflectionCtx& ctx);

MCAPI ::std::string const& getLevelSoundEventName(::SharedTypes::Legacy::LevelSoundEvent event);

MCAPI bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);
// NOLINTEND

} // namespace SharedTypes::Legacy
