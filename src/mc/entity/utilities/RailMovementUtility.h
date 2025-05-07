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
        ::ll::UntypedStorage<4, 4> mUnke53b4d;
        ::ll::UntypedStorage<4, 4> mUnk5d0fd8;
        ::ll::UntypedStorage<4, 4> mUnkd31793;
        // NOLINTEND

    public:
        // prevent constructor by default
        Exit& operator=(Exit const&);
        Exit(Exit const&);
        Exit();
    };

    struct RailExits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb69b72;
        ::ll::UntypedStorage<4, 12> mUnkcebc2c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RailExits& operator=(RailExits const&);
        RailExits(RailExits const&);
        RailExits();
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 calculateGoldenRailSpeedIncrease(
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        int                        direction,
        ::Vec3                     posDelta
    );

    MCNAPI static ::Vec3 calculateMoveVelocity(
        ::Block const&                        block,
        int                                   railDirection,
        float                                 maxSpeed,
        bool                                  hasPassenger,
        ::Vec3&                               posDelta,
        bool&                                 haltTrack,
        bool&                                 powerTrack,
        ::std::function<bool(::Vec3&)> const& calculateAllPassengersInputFunc
    );

    MCNAPI static ::Vec3 calculatePostRailMovementMinecartPosition(
        ::IConstBlockSource const& region,
        ::Vec3 const&              originalEntityPosition,
        ::Vec3                     entityPos,
        ::BlockPos const&          pos,
        int                        railDirection,
        ::Vec3&                    posDelta
    );

    MCNAPI static bool getPos(::IConstBlockSource const& region, ::Vec3& valueVec, ::Vec3 pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<::RailMovementUtility::RailExits, 10> const& RAIL_EXITS();
    // NOLINTEND
};
