#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailMovementUtility {
public:
    // RailMovementUtility inner types declare
    // clang-format off
    struct RailExits;
    // clang-format on

    // RailMovementUtility inner types define
    struct RailExits {
    public:
        // prevent constructor by default
        RailExits& operator=(RailExits const&);
        RailExits(RailExits const&);
        RailExits();
    };

public:
    // prevent constructor by default
    RailMovementUtility& operator=(RailMovementUtility const&);
    RailMovementUtility(RailMovementUtility const&);
    RailMovementUtility();

public:
    // NOLINTBEGIN
    MCAPI static class Vec3 calculateGoldenRailSpeedIncrease(
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        int                            direction,
        class Vec3                     posDelta
    );

    MCAPI static class Vec3 calculateMoveVelocity(
        class Block const&                      block,
        int                                     railDirection,
        float                                   maxSpeed,
        bool                                    hasPassenger,
        class Vec3&                             posDelta,
        bool&                                   haltTrack,
        bool&                                   powerTrack,
        std::function<bool(class Vec3&)> const& calculateAllPassengersInputFunc
    );

    MCAPI static bool
    calculatePassengerRailMovementInput(class Vec3& posDelta, float forward, float passengerRotationY);

    MCAPI static class Vec3 calculatePostRailMovementMinecartPosition(
        class IConstBlockSource const& region,
        class Vec3 const&              originalEntityPosition,
        class Vec3                     entityPos,
        class BlockPos const&          pos,
        int                            railDirection,
        class Vec3&                    posDelta
    );

    MCAPI static class Vec3 calculatePreRailMovementMinecartPosition(
        class Vec3            entityPos,
        class BlockPos const& pos,
        int                   railDirection,
        float                 heightOffset
    );

    MCAPI static bool getPos(class IConstBlockSource const& region, class Vec3& valueVec, class Vec3 pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::array<struct RailMovementUtility::RailExits, 10> const& RAIL_EXITS();

    // NOLINTEND
};
