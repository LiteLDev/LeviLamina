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
    // symbol: ??0ServerParticleManager@@QEAA@_N@Z
    MCAPI explicit ServerParticleManager(bool);

    // symbol: ?setPacketSender@ServerParticleManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // symbol:
    // ?spawnParticleEffect@ServerParticleManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void spawnParticleEffect(std::string const&, class Vec3 const&, DimensionType);

    // NOLINTEND
};
