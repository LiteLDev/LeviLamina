#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportComponent {
public:
    // prevent constructor by default
    TeleportComponent& operator=(TeleportComponent const&);
    TeleportComponent(TeleportComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TeleportComponent();

    MCAPI float getDarkTeleportChance();

    MCAPI float getLightTeleportChance();

    MCAPI int getMaxTeleportTime();

    MCAPI int getMinTeleportTime();

    MCAPI bool getRandomTeleports();

    MCAPI float getTargetDistance();

    MCAPI float getTargetTeleportChance();

    MCAPI int getTeleportTime();

    MCAPI void initFromDefinition(class Actor& actor);

    MCAPI bool randomTeleport(class Actor& owner);

    MCAPI void setTeleportTime(int teleportTime);

    MCAPI bool teleport(class Actor& owner, class Vec3 const& pos);

    MCAPI bool teleportTowards(class Actor& owner, class Actor const& target);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
