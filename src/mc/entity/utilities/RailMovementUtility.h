#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
// clang-format on

class RailMovementUtility {
public:
    // RailMovementUtility inner types declare
    // clang-format off
    struct Exit;
    struct RailExits;
    // clang-format on

    // RailMovementUtility inner types define
    struct Exit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> x;
        ::ll::TypedStorage<4, 4, int> y;
        ::ll::TypedStorage<4, 4, int> z;
        // NOLINTEND
    };

    struct RailExits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::RailMovementUtility::Exit> mExitA;
        ::ll::TypedStorage<4, 12, ::RailMovementUtility::Exit> mExitB;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 calculateGoldenRailSpeedIncrease(
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        int                        direction,
        ::Vec3                     posDelta
    );

    MCAPI static ::Vec3 calculateMoveVelocity(
        ::Block const&                        block,
        int                                   railDirection,
        float                                 maxSpeed,
        bool                                  hasPassenger,
        ::Vec3&                               posDelta,
        bool&                                 haltTrack,
        bool&                                 powerTrack,
        ::std::function<bool(::Vec3&)> const& calculateAllPassengersInputFunc
    );

    MCAPI static ::Vec3 calculatePostRailMovementMinecartPosition(
        ::IConstBlockSource const& region,
        ::Vec3 const&              originalEntityPosition,
        ::Vec3                     entityPos,
        ::BlockPos const&          pos,
        int                        railDirection,
        ::Vec3&                    posDelta
    );

    MCAPI static bool getPos(::IConstBlockSource const& region, ::Vec3& valueVec, ::Vec3 pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::RailMovementUtility::RailExits, 10> const& RAIL_EXITS();
    // NOLINTEND
};
