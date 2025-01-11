#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class TeleportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd27a78;
    ::ll::UntypedStorage<4, 4>  mUnkfb25d6;
    ::ll::UntypedStorage<4, 4>  mUnkdd4329;
    ::ll::UntypedStorage<4, 12> mUnk414724;
    ::ll::UntypedStorage<4, 4>  mUnkd76162;
    ::ll::UntypedStorage<4, 4>  mUnkced562;
    ::ll::UntypedStorage<4, 4>  mUnkca4db8;
    ::ll::UntypedStorage<4, 4>  mUnk87c23f;
    ::ll::UntypedStorage<4, 4>  mUnk578ac0;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportComponent& operator=(TeleportComponent const&);
    TeleportComponent(TeleportComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TeleportComponent();

    MCFOLD float getDarkTeleportChance();

    MCFOLD float getLightTeleportChance();

    MCFOLD int getMaxTeleportTime();

    MCFOLD int getMinTeleportTime();

    MCFOLD bool getRandomTeleports();

    MCFOLD float getTargetDistance();

    MCFOLD float getTargetTeleportChance();

    MCFOLD int getTeleportTime();

    MCAPI void initFromDefinition(::Actor& actor);

    MCAPI bool randomTeleport(::Actor& owner);

    MCAPI void setTeleportTime(int teleportTime);

    MCAPI bool teleport(::Actor& owner, ::Vec3 const& pos);

    MCAPI bool teleportTowards(::Actor& owner, ::Actor const& target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
