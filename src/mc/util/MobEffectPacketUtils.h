#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MobEffectPacket.h"

namespace MobEffectPacketUtils {
// NOLINTBEGIN
MCAPI std::optional<class MobEffectPacket> createPacket(
    ::MobEffectPacket::Event       eventType,
    class MobEffectInstance const& effect,
    class EntityContext const&     sourceEntity
);
// NOLINTEND

}; // namespace MobEffectPacketUtils
