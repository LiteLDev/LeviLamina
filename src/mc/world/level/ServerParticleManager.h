#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class ServerParticleManager {
public:
    // prevent constructor by default
    ServerParticleManager& operator=(ServerParticleManager const&);
    ServerParticleManager(ServerParticleManager const&);
    ServerParticleManager();

public:
    // NOLINTBEGIN
    MCAPI explicit ServerParticleManager(bool isClientSide);

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI void
    spawnParticleEffect(std::string const& effectName, class Vec3 const& spawnLocation, DimensionType dimensionType);

    // NOLINTEND
};
