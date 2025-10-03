#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class Strider : public ::Animal {
public:
    // Strider inner types declare
    // clang-format off
    class PlayerRideInLavaInOverworldAchievementTracker;
    // clang-format on

    // Strider inner types define
    class PlayerRideInLavaInOverworldAchievementTracker {
    public:
        // PlayerRideInLavaInOverworldAchievementTracker inner types define
        enum class VehicleState : uchar {
            Riding = 0,
            Done   = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Strider::PlayerRideInLavaInOverworldAchievementTracker::VehicleState> mState;
        ::ll::TypedStorage<1, 1, bool>      mHasSentAchievement;
        ::ll::TypedStorage<1, 1, bool>      mInLavaWithPlayer;
        ::ll::TypedStorage<4, 12, ::Vec3>   mStartPosInLava;
        ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void tick(::Strider& strider);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Strider::PlayerRideInLavaInOverworldAchievementTracker>
        mPlayerRideInLavaInOverworldAchievementTracker;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 8
    virtual ~Strider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI void $normalTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
