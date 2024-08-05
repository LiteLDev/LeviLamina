#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ServerParticleManager {
public:
    // prevent constructor by default
    ServerParticleManager& operator=(ServerParticleManager const&);
    ServerParticleManager(ServerParticleManager const&);
    ServerParticleManager();

public:
    // NOLINTBEGIN
    MCAPI explicit ServerParticleManager(bool);

    MCAPI void setPacketSender(class PacketSender&);

    MCAPI void spawnParticleEffect(std::string const&, class Vec3 const&, DimensionType);

    // NOLINTEND
};
