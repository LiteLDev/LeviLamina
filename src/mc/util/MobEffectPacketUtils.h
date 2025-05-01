#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MobEffectPacket.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MobEffectInstance;
class MobEffectPacket;
// clang-format on

namespace MobEffectPacketUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::MobEffectPacket> createPacket(
    ::MobEffectPacket::Event   eventType,
    ::MobEffectInstance const& effect,
    ::EntityContext const&     sourceEntity
);
// NOLINTEND

} // namespace MobEffectPacketUtils
