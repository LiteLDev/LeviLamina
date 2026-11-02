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
MCNAPI void bindActorDamageCause(::cereal::ReflectionCtx& ctx);

MCNAPI void bindEquipmentSlot(::cereal::ReflectionCtx& ctx);

MCNAPI void bindFilterSubject(::cereal::ReflectionCtx& ctx);

MCNAPI void bindLevelSoundEventType(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::string const& getLevelSoundEventName(::SharedTypes::Legacy::LevelSoundEvent event);

MCNAPI bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);
// NOLINTEND

} // namespace SharedTypes::Legacy
