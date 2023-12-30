#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportComponent {
public:
    // prevent constructor by default
    TeleportComponent& operator=(TeleportComponent const&);
    TeleportComponent(TeleportComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TeleportComponent@@QEAA@XZ
    MCAPI TeleportComponent();

    // symbol: ?getDarkTeleportChance@TeleportComponent@@QEAAMXZ
    MCAPI float getDarkTeleportChance();

    // symbol: ?getLightTeleportChance@TeleportComponent@@QEAAMXZ
    MCAPI float getLightTeleportChance();

    // symbol: ?getMaxTeleportTime@TeleportComponent@@QEAAHXZ
    MCAPI int getMaxTeleportTime();

    // symbol: ?getMinTeleportTime@TeleportComponent@@QEAAHXZ
    MCAPI int getMinTeleportTime();

    // symbol: ?getRandomTeleports@TeleportComponent@@QEAA_NXZ
    MCAPI bool getRandomTeleports();

    // symbol: ?getTargetDistance@TeleportComponent@@QEAAMXZ
    MCAPI float getTargetDistance();

    // symbol: ?getTargetTeleportChance@TeleportComponent@@QEAAMXZ
    MCAPI float getTargetTeleportChance();

    // symbol: ?getTeleportTime@TeleportComponent@@QEAAHXZ
    MCAPI int getTeleportTime();

    // symbol: ?initFromDefinition@TeleportComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol: ?randomTeleport@TeleportComponent@@QEAA_NAEAVActor@@@Z
    MCAPI bool randomTeleport(class Actor& owner);

    // symbol: ?setTeleportTime@TeleportComponent@@QEAAXH@Z
    MCAPI void setTeleportTime(int teleportTime);

    // symbol: ?teleport@TeleportComponent@@QEAA_NAEAVActor@@AEBVVec3@@@Z
    MCAPI bool teleport(class Actor& owner, class Vec3 const& pos);

    // symbol: ?teleportTowards@TeleportComponent@@QEAA_NAEAVActor@@AEBV2@@Z
    MCAPI bool teleportTowards(class Actor& owner, class Actor const& target);

    // NOLINTEND
};
